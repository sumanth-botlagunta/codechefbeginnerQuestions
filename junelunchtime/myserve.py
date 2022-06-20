t = int(input())
for i in range(t):
    p,q = map(int,input().split())
    ts = p+q;
    list1 =[0,1,5,9,13,17,4,8,12,16,20]
    if ts in list1:
        print('Alice')
    else:
        print('Bob')