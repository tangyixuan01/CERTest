
import re

def test():
    input_str = input()
    dimensions = [size for size in re.findall(r'\[(.*?)\]', input_str)]
    for dimension in dimensions:
        dimension = dimension.strip()
        # 判断字符串是否为空或者是否含有字母
        if dimension == '' or re.search(r'[a-zA-Z]', dimension):
            dimensions[dimensions.index(dimension)] = 100
        else:
            dimensions[dimensions.index(dimension)] = int(eval(dimension))
    print(dimensions)

test()