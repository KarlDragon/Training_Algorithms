dictionary = {}
ans_string = ""
with open("BAI4.INP","r") as f:
    while True:
        string = f.readline().strip().lower()
        if string == "":
            break
        for i in range(len(string)):
            if string[i] == " ": continue
            if (dictionary.get(string[i])):
                dictionary[string[i]] += 1
            else:
                dictionary[string[i]] = 1
                ans_string += string[i]
sum = 0
for key, value in dictionary.items():
    if value > 1:
        sum += value
f = open("BAI4.OUT","w")
f.writelines(str(sum) + " " + ans_string)
f.close()