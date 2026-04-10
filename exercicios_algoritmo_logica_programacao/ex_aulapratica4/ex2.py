x = int(input("Digite o valor de x: "))
y = int(input("Digite o valor de y: "))
z = int(input("Digite o valor de z: "))

if x <= z <= y:
    print(f"{z} pertence ao intervalo [{x}, {y}]")
else:
    print(f"{z} NÃO pertence ao intervalo [{x}, {y}]")
