#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
@Author       : jwzeng
@Date         : 2023-08-19 21:17:04
@LastEditTime : 2023-08-19 21:30:37
@FilePath     : \jwzeng_workplace\paper_reproduction\yarpgen\scripts\util\lldb_util.py
@Description  : 
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

    # 设置断点,将断点设置在driver.c文件的1446行
    now_dir = os.path.dirname(os.path.abspath(__file__))
    # print('now_dir:', now_dir)
    # file_path = os.path.join(now_dir, 'test.c')
    # target_file = lldb.SBFileSpec(file_path)
    # print('target_file exists:', target_file.Exists())
    # breakpoint = target.BreakpointCreateByLocation(target_file, 1446)
    # print('breakpoint:', breakpoint)

    # 设置断点,将断点设置在main函数
    # breakpoint = target.BreakpointCreateByName ('test', target.GetExecutable().GetFilename())
    # print('breakpoint:', breakpoint)

    if not breakpoint:
        print("Failed to set breakpoint")
        return

    # 启动调试器会话
    process = target.LaunchSimple(None, None, now_dir)

    if not process:
        print("Failed to launch process")
        return
    
    if process.GetState() == lldb.eStateStopped:
        thread = process.GetThreadAtIndex(0)
        frame = thread.GetFrameAtIndex(0)
        symbol = frame.GetSymbol()
        instructions = symbol.GetInstructions(target)
        for i in instructions:
            print(i)
            print(i.GetAddress())
            print()
    exit()

    # 进入主循环，逐步执行并交互式调试
    while process.GetState() == lldb.eStateStopped:
        thread = process.GetThreadAtIndex(0)
        frame = thread.GetFrameAtIndex(0)

        print('>> thread:', thread)
        print('>> frame:', frame)
        line_entry = frame.GetLineEntry()
        print('>> line_entry:', line_entry)
        print('>> line_entry.GetFileSpec():', line_entry.GetFileSpec())
        print('>> line_entry.GetLine():', line_entry.GetLine())
        print('>> line_entry.GetColumn():', line_entry.GetColumn())
        offset = line_entry.GetEndAddress().GetOffset() - line_entry.GetStartAddress().GetOffset()
        print('>> offset:', offset)
        print('>> start address:', line_entry.GetStartAddress())
        print('>> end address:', line_entry.GetEndAddress())
        print()
        thread.StepOver()

    print()
    state = process.GetState()
    print("Process state:", state)
    print('process state string:', lldb.SBDebugger.StateAsCString(state))

if __name__ == "__main__":
    main()
