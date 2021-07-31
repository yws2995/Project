import sys
test_case = int(sys.stdin.readline())
A = []
for _ in range(test_case):
    A.append(int(sys.stdin.readline()))
for i in sorted(A):
    print(i)
