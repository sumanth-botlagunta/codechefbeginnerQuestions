def solution():
    n,x =map(int,input().split())
    min_length = 2*x - 1
    if n<min_length:
        print(-1)
        return
    solution = ['a' for i in range(n)]
    for i in range(1,n):
        solution[i-1] = chr(ord('a')+i)
        solution[n-i] = chr(ord('a')+i)
    print(''.join(solution))

t = int(input())
for i in range(t):
    solution()