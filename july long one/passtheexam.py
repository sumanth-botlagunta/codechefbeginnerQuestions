t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    if (a>=10) &(b>=10) & (c>=10) &  ((a+b+c)>=100):
        print('PASS')
    else:
        print('FAIL')