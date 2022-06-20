import math
t = int(input())
for i in range(t):
    x,y = map(int,input().split())
    X= math.ceil(x/10)
    Y= math.ceil(y/10)
    print(abs(X-Y))