from itertools import groupby 
t = int(input())
for i in range(t):
    length = int(input())
    string = input()
    string = list(string)
    string = [i[0] for i in groupby(string)]
    l = len(string)
    # print(string)
    sc = string.count('1')
    if string[l - 1] == '1':
        print(sc-1)
    else:
        print(sc)