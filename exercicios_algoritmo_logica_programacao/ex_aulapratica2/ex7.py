c = float(input("Digite o comprimento: "))
l = float(input("Digite a largura: "))
p = float(input("Digite o preço do metro de tela: "))
area = c * l
custo = area * p

print(f"O preço para cercar o terreno é de: {custo:.2f}.")
