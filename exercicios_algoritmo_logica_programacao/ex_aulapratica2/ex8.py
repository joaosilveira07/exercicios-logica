num1 = int(input("Digite um número entre 100 a 999: "))
centena = num1 // 100
dezena = (num1 % 100) // 10
unidade = num1 % 10
invertido = unidade * 100 + dezena * 10 + centena

print(f"Número gerado: {invertido}.")
