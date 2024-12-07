with open("Bai3.inp","r") as f_inp:
    with open("Bai3.out","w") as f_out: 
        n = int(f_inp.readline())
        for i in range(n):
            char_count = {}
            is_print = False 
            string = f_inp.readline().strip()
            for char in string:
                if char_count.get(char):
                    char_count[char] += 1
                else:
                    char_count[char] = 1
            for i in range(len(string)):
                if char_count[string[i]] == 1:
                    is_print = True
                    f_out.writelines(str(i+1) + "\n")
                    break
            if is_print == False:
                f_out.writelines("-1 \n")
