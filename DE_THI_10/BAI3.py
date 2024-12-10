with open("BAI3.INP", "r") as fi:
    with open("BAI3.OUT","w") as fo:
        n = int(fi.readline())
        string = fi.readline()
        for i in range(1,n):
            new_set = set()
            for j in range(n-i + 1):
                new_set.add(string[j:j+i])
                # print(string[j:j+i])
            if len(new_set) == n - i + 1:
                fo.writelines(str(i))
                break