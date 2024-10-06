import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..")))
from util.mutate_util import *

"""
Test What?
"""

if __name__ == "__main__":
    if not os.path.exists('tmp'):
        os.mkdir('tmp')
    os.chdir('tmp')
