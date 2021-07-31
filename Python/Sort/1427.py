import sys

N = list(sys.stdin.readline())

list = (sorted(N, reverse=True))

# print(list)
for i in list:
    print(i, end='')
