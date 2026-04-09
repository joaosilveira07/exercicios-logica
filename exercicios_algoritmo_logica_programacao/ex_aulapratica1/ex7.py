peso = float(input("Qual seu peso em Kg's? "))
altura = float(input("Qual sua altura em Metros? "))
imc = peso / (altura * altura)

print(f"Seu IMC é de: {imc:.2f}")
