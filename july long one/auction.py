
t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    if (a>b)&(a>c):
        print('Alice')
    elif (b>a)&(b>c):
        print('Bob')
    else:
        print('Charlie')