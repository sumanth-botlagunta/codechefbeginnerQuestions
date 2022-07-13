t = int(input())
for i in range(t):
    maxT,maxN,sumN = map(int,input().split())
    iterations = 0
    while maxT > 0:
        if (sumN>=maxN)&(maxT>0):
            sumN = sumN - maxN
            iterations = iterations+(maxN*maxN)
            maxT = maxT - 1
        elif (sumN<maxN)&(maxT>0):
            iterations = iterations+(sumN*sumN)
            maxT = 0
    print(iterations)
