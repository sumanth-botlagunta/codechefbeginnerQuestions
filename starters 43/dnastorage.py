t = int(input())
for i in range(t):
    n = int(input())
    bi_str = input()
    # access substring of length 2 from the string at a time
    # and convert it to integer
    # then add it to the list
    bi_list = [bi_str[i:i+2] for i in range(0, len(bi_str), 2)]
    result = ""
    for j in range(len(bi_list)):
        if bi_list[j] == "00":
            result += "A"
        if bi_list[j] == "11":
            result += "G"
        if bi_list[j] == "10":
            result += "C"
        if bi_list[j] == "01":
            result += "T"
    print(result)