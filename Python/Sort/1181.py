# import sys

# N = int(sys.stdin.readline())
# word_list = []
# for i in range(N):
#     word_list.append(sys.stdin.readline().strip())
#     word_list.sort()
#     word_list.sort(key=len)

# for i in word_list:
#     print(i)
import sys

N = int(sys.stdin.readline())
word_list = []
for i in range(N):
    word_list.append(sys.stdin.readline().strip())
    word_list.sort()
    word_list.sort(key=len)

for i in word_list:
    print(i)
