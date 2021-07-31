n = int(input())
k = []
room = 0
for i in range(n):
    start, end = map(int, input().split())
    k.append([start, end])

k = sorted(k, key=lambda a: a[0])
k = sorted(k, key=lambda a: a[1])

new_end = 0
for start, end in k:
    if start >= new_end:
        room += 1
        new_last = end
print(room)
