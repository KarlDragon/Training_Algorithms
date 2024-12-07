with open("BAI1.INP","r") as fi:
    lst = fi.readline().split()
    max_len = 0
    max_num = 0
    for string in lst:
        if "0"<=string[0]<="9":
            max_num = max(max_num,int(string))
        else:
            max_len = max(max_len,len(string))

fo = open("BAI1.OUT","w")
fo.writelines(str(max_num) + " " + str(max_len))
fo.close()