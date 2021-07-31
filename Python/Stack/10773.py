# # 재현이는 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.

# # 재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다. 재민이를 도와주자!


# # 정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.

import sys
K = int(sys.stdin.readline())
stack = []
for i in range(K):
    number = int(sys.stdin.readline())
    if number != 0:
        stack.append(number)
    elif number == 0:
        stack.pop()

print(sum(stack[:]))
