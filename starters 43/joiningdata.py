t = int(input())
for i in range(t):
    n,k = map(int,input().split())
    if n%5 == 0:
        groups = n//5
    else:
        groups = n//5 + 1
    if k%5 == 0:
        noteffected = k//5
    else:
        noteffected = k//5 + 1
    print(groups-noteffected)

