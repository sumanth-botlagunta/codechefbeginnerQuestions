from math import ceil

t = int(input())
for i in range(t):
    n,x = map(int,input().split())
    if x<n:
        print(ceil((n-x)/4))
    else:
        print(0)