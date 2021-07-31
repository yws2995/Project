import sys

test_case = int(sys.stdin.readline())
cordinate = []
for i in range(test_case):
    cordinate.append(list(map(int, sys.stdin.readline().split())))

cordinate.sort(key=lambda x: (x[1], x[0]))
for i in range(test_case):
    print(cordinate[i][0], cordinate[i][1])
