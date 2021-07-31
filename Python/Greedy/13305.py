N = int(input())
road = list(map(int, input().split()))
cost = list(map(int, input().split()))

min_cost = cost[0]
total = 0
for i in range(1, N):
    if cost[i] < min_cost:
        min_cost = cost[i]
        total += min_cost * road[i]
    else:
        total += min_cost * road[i]
print(total)
