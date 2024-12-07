with open("DIFFSSTR.INP","r") as fi:
    with open("DIFFSSTR.OUT","w") as fo:
        n = int(fi.readline())
        string = fi.readline()
        for i in range(1,n):
            new_set = set()
            for j in range(n - i):
                new_set.add(string[j:j+i])
            if len(new_set) == n - i:
                fo.writelines(str(i))
                break