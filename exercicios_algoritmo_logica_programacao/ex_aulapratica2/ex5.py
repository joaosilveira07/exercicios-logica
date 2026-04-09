altura_degrau = int(input("Qual é a altura do degrau da escada? "))
altura_desejada = int(input("Qual é a altura que você deseja alcançar? "))
obj = altura_desejada - altura_degrau

print(f"Você ainda precisa subir {obj} degraus para alcançar seu objetivo.")
