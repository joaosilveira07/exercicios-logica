preco = int(input("Digite o preço do produto "))

if preco > 100:
    preco *= 0.90
    print(f"Este preço de produto é elegível para desconto de 10%, portanto seu novo valor é de {preco}")
else:
    print(f"O preço permaneceu o mesmo: {preco}")
