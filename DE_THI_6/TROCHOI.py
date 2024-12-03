with open("TROCHOI.INP", "r") as f:
    n = int(f.readline()) 
    dictionary = []

    for i in range(n):
        string = f.readline().strip()
        digit_count = sum(1 for c in string if '0' <= c <= '9')
        dictionary.append((digit_count, string))
dictionary.sort(key=lambda item: item[0])

with open("TROCHOI.OUT", "w") as f:
    for _, code in dictionary:
        f.write(code + "\n")
