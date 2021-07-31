# 명령의 수
import sys
N = int(sys.stdin.readline())
stack = []

for i in range(N):
    command = sys.stdin.readline().split()
# push X: 정수 X를 스택에 넣는 연산이다.
# pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
# size: 스택에 들어있는 정수의 개수를 출력한다.
# empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
# top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
# push처리
    if command[0] == 'push':
        stack.append(command[1])
# pop처리
    elif command[0] == 'pop':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
# size처리
    elif command[0] == 'size':
        print(len(stack))
# empty처리
    elif command[0] == 'empty':
        if(len(stack)) == 0:
            print(1)
        else:
            print(0)
# top처리
    elif command[0] == 'top':
        if(len(stack)) == 0:
            print(-1)
        else:
            print(stack[-1])
