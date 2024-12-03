dictionary = {}
with open("SDB.INP","r") as f:
    n = int(f.readline())
    for i in range(n):
        num = int(f.readline())
        if dictionary.get(num):
            dictionary[num] += 1
        else:
            dictionary[num] = 1
lst_len = 0
lst = []
for key, value in dictionary.items():
    if value == 1:
       lst.append(key)
       lst_len+=1

f = open("SDB.OUT","w")
f.writelines(str(lst_len) + "\n")
for i in range(lst_len):
    f.writelines(str(lst[i]) + "\n") 
f.close()
