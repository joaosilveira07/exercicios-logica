def soma(num):
    s = 0
    while(num > 0):
        s += num % 10
        num = num // 10
    return s

def maior(num):
    m = 0
    while(num > 0):
        aux = num % 10
        if (aux > m):
            m = aux
            num = num // 10
        return m

valor = int(input("digite um valor: "))
sd = soma(valor)
md = maior(valor)

print(f"{valor} tem {sd} como soma dos seus digitos")
print(f"E o maior digito é {md}")
