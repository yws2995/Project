n, k = map(int, input().split())
m = []
count = 0
# 오름차순 동전
for i in range(n):
    m.append(int(input()))

for coin in range(n-1, -1, -1):
    # 오름차순이므로 m[-1]마지막부터 비교
    if k == 0:
        break
    else:
        count += k // m[coin]
        k = k % m[coin]
print(count)
