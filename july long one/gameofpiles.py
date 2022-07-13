t = int(input())
for i in range(t):
    n = int(input())
    lst = list(map(int,input().strip().split()))[:n]
    # print(list)
    xor_sum = lst[0]
    for i in range(1,n):
        xor_sum = xor_sum^lst[i]
    print(xor_sum)
    if xor_sum != 0:
        print("CHEF")
    else:
        print("CHEFINA")
