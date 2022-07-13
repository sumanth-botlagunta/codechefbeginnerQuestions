def checkpos (x1,y1,x2,y2):
    ty1 = y1+1
    ty2 = y1+2
    sy1 = y1-1
    sy2 = y1-2
    tx1 = x1+1
    tx2 = x1+2

    if(x2 == tx2) & (y2 == y1+1) & (tx2<=8) & (ty1<=8)&(ty1>=1):
        return True 
    elif (x2 == tx1) & (y2 == ty2) & (tx1<=8) & (ty2<=8)&(ty2>=1):
        return True 
    elif (x2 == tx2) & (y2 == sy1)& (tx2<=8) & (sy1<=8)&(sy1>=1):
        return True 
    elif (x2 == tx1) & (y2 == sy2)& (tx1<=8) & (sy2<=8)&(sy2>=1):
        return True 
    else:
        checkpos(x1,y1,x2,y2)


t = int(input())
for i in range(t):
    x1,y1,x2,y2 = map(int,input().split())
    flag = False
    for j in range(100):
       
    if flag == True:
        print('YES')
    else:
        print('NO')