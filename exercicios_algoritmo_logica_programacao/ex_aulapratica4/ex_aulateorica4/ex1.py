nota = float(input("Digite uma nota: "))

while (nota < 0) or (nota > 10):
    print(f"Valor inválido!")
    nota = float(input("Digite uma nota: "))

print(f"Parabéns, sua nota é {nota}!")
