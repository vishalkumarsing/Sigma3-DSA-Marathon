import sys, math, itertools, functools, collections
input = sys.stdin.readline

for testcase in range(int(input())):
    a, b, c = map(int, input().split())
    dif = (abs(a - b) + 1) // 2
    print((dif + c - 1) // c)