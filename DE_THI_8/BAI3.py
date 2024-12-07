def reverse_number(x):
    return int(str(x)[::-1])

fi = open("BAI3.INP","r")
n = int(fi.readline())
fi.close()

if n < 83:
    num = 1
    for _ in range(n - 1):
        num = reverse_number(num) + 2  
else:
    end_point = n % 81 - 1
    num = 3
    for i in range(1,end_point):
        num = reverse_number(num) + 2
fo = open("BAI3.OUT","w")
fo.writelines(str(num))
fo.close()