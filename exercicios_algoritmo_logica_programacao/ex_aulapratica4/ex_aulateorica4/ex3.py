contador = 1
soma = 0

while contador <= 5:
    numero = float(input(f"Digite o {contador}º número: "))
    soma += numero
    contador += 1

media = soma / 5

print(f"Soma: {soma}")
print(f"Média: {media}")
