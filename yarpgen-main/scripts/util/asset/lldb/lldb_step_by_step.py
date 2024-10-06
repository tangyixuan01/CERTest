"""
@Author       : jwzeng
@Date         : 2023-08-24 20:38:24
@LastEditTime : 2023-08-24 20:41:21
@FilePath     : /compiler_testing/scripts/util/asset/lldb/lldb_step_by_step.py
@Description  : 一步一步调试程序
@
@Copyright (c) 2023 by jwzeng, All Rights Reserved. 
"""

import os
import lldb

def main():
    debugger = lldb.SBDebugger.Create()
    debugger.SetAsync(False)
    target = debugger.CreateTarget("a.out")

    if not target:
        print("Failed to create target")
        return

    # 设置断点
    breakpoint = target.BreakpointCreateByName ('main', target.GetExecutable().GetFilename());
    if not breakpoint:
        print("Failed to set breakpoint")
        return

    # 启动调试器会话
    process = target.LaunchSimple(None, None, os.getcwd())

    if not process:
        print("Failed to launch process")
        return

    # 进入主循环，逐步执行并交互式调试
    while process.GetState() == lldb.eStateStopped:
        thread = process.GetThreadAtIndex(0)
        frame = thread.GetFrameAtIndex(0)

        print('>> thread:', thread)
        print('>> frame:', frame)

        # 获取当前行号
        line_entry = frame.GetLineEntry()
        line = line_entry.GetLine()

        print(f"Stopped at line {line}")

        # 打印堆栈信息
        print("Stack Trace:")
        for i in range(thread.GetNumFrames()):
            frame = thread.GetFrameAtIndex(i)
            function_name = frame.GetFunctionName()
            print(f"Frame {i}: {function_name}")

        # 命令交互
        command = input("Enter command (s-step, n-next, c-continue, q-quit): ")

        if command == "s":
            thread.StepInto()
        elif command == "n":
            thread.StepOver()
        elif command == "c":
            process.Continue()
        elif command == "q":
            process.Kill()
            break

    state = process.GetState()
    print("Process state:", state)
    print('process state string:', lldb.SBDebugger.StateAsCString(state))

if __name__ == "__main__":
    main()
