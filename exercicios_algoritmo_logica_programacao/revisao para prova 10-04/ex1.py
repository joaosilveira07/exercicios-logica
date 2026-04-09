datanasc = int(input("Digite o ano em que você nasceu: "))
data_atual = int(input("Digite o ano atual: "))
idade = data_atual - datanasc
ano = 365
dias_vividos = idade * ano

print(f"Você tem {idade} anos, portanto já viveu {dias_vividos} dias")
