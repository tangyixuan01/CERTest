import torch
import torch.nn as nn
import torch.autograd as autograd
import numpy as np

import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..")))
from util.dqn.rl_common.replay_buffers import BasicBuffer
from util.dqn.models import ConvDQN, DQN

# 导入必要的库和模块

class DQNAgent:

    def __init__(self, env, use_conv=True, learning_rate=3e-4, gamma=0.99, buffer_size=10000):
        # 初始化DQNAgent对象
        self.env = env  # 存储环境对象
        self.learning_rate = learning_rate  # 学习率
        self.gamma = gamma  # 折扣因子
        self.replay_buffer = BasicBuffer(max_size=buffer_size)  # 创建经验回放缓冲区

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")  # 检测并选择GPU或CPU

        self.use_conv = use_conv  # 是否使用卷积神经网络
        if self.use_conv:
            self.model = ConvDQN(env.observation_space.shape, env.action_space.n).to(self.device)
        else:
            self.model = DQN(env.observation_space.shape, env.action_space.n).to(self.device)
        # 创建Q值估计模型（ConvDQN或DQN）并将其放到GPU或CPU上

        self.optimizer = torch.optim.Adam(self.model.parameters())  # 创建Adam优化器
        self.MSE_loss = nn.MSELoss()  # 创建均方误差损失函数

    def get_action(self, state, eps=0.20):
        # 根据当前状态选择动作
        state = torch.FloatTensor(state).float().unsqueeze(0).to(self.device)  # 转换并移到适当的设备
        qvals = self.model.forward(state)  # 获取Q值
        action = np.argmax(qvals.cpu().detach().numpy())  # 选择具有最高Q值的动作

        if(np.random.randn() < eps):
            return self.env.action_space.sample()  # 以ε-贪心策略进行探索

        return action  # 返回选择的动作

    def compute_loss(self, batch):
        # 计算损失函数
        states, actions, rewards, next_states, dones = batch
        states = torch.FloatTensor(states).to(self.device)
        actions = torch.LongTensor(actions).to(self.device)
        rewards = torch.FloatTensor(rewards).to(self.device)
        next_states = torch.FloatTensor(next_states).to(self.device)
        dones = torch.FloatTensor(dones)

        curr_Q = self.model.forward(states).gather(1, actions.unsqueeze(1))  # 当前状态的Q值
        curr_Q = curr_Q.squeeze(1)
        next_Q = self.model.forward(next_states)  # 下一个状态的Q值
        max_next_Q = torch.max(next_Q, 1)[0]  # 下一个状态中最大的Q值
        expected_Q = rewards.squeeze(1) + self.gamma * max_next_Q  # 预期的Q值

        loss = self.MSE_loss(curr_Q, expected_Q)  # 计算均方误差损失
        return loss

    def update(self, batch_size):
        # 使用经验数据更新神经网络
        batch = self.replay_buffer.sample(batch_size)  # 从经验回放缓冲区中采样一批数据
        loss = self.compute_loss(batch)  # 计算损失

        self.optimizer.zero_grad()  # 清零梯度
        loss.backward()  # 反向传播
        self.optimizer.step()  # 更新神经网络参数
