n = int(input())

def hanoi(n, start, end):
    if n == 1:
        print(start,end)
        return
