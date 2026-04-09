idade = int(input("Digite sua idade: "))
peso = int(input("Digite seu peso: "))

if idade < 18:
    print("Você é da categoria Juvenil!")
else:
    if peso <= 80:
        print("Peso médio!")
    else:
        print("Peso Pesado!")
    
