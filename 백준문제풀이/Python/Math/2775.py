import sys

T = int(sys.stdin.readline())

for i in range(T):
    k = int(sys.stdin.readline())
    n = int(sys.stdin.readline())
    people = [i for i in range(1, n+1)]

    for _ in range(k):
        for j in range(1, n):
            people[j] += people[j-1]

    print(people[-1])
