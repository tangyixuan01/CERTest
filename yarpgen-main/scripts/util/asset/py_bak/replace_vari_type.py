"""
@Author       : jun-wei-zeng
@Date         : 2023-11-30 22:28:59
@LastEditTime : 2023-11-30 22:32:05
@FilePath     : replace_vari_type.py
@Description  : 替换test.c中的变量类型
@
@Copyright (c) 2023 by jun-wei-zeng, All Rights Reserved. 
"""

with open('test.c', 'r') as f:
    content = f.read()

content = content.replace('uint64_t', 'unsigned long')
content = content.replace('uint32_t', 'unsigned int')
content = content.replace('uint16_t', 'unsigned short')
content = content.replace('uint8_t', 'unsigned char')
content = content.replace('int64_t', 'long')
content = content.replace('int32_t', 'int')
content = content.replace('int16_t', 'short')
content = content.replace('int8_t', 'char')

with open('test.c', 'w') as f:
    f.write(content)
