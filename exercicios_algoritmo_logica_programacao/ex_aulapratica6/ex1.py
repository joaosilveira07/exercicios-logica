c1 = 0
c2 = 0
c3 = 0
c4 = 0
num = int(input("Digite um valor: "))

while (num >= 0):
    if num <= 25:
        c1 += 1
    else:
        if num <= 50:
            c2 += 1
        else:
            if num <= 75:
                c3 += 1
            else:
                if num <= 100:
                    c4 += 1

print(f"{c1}, {c2}, {c3}, {c4}")
