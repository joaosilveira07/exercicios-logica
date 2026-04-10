num1 = int(input("digite o primeiro numero: "))
num2 = int(input("digite o segundo numero: "))
num3 = int(input("digite o terceiro numero: "))

if (num1 > num2):
    maior = num1
else:
    maior = num2
if (num3 > maior):
    maior = num3
print(f"O maior número entre {num1}, {num2} e {num3} é o {maior}")
