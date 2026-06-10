respostas = []
perguntas = ["Telefonou para a vítima?", "Esteve no local do crime?", "Mora perto da vítima?", "Devia algo para a vítima?", "Já trabalhou com a vítima?"]

for pergunta in perguntas:
    resposta = input(pergunta)
    if resposta == "sim":
        respostas.append(resposta)

contador_positivo = len(respostas)
print(contador_positivo)

if contador_positivo == 5:
    print("Esta pessoa é o assassino!")
elif 3 <= contador_positivo <= 4:
    print("Esta pessoa é cúmplice!")
elif contador_positivo == 2:
    print("Esta pessoa é suspeita!")
else:
    print("Esta pessoa é inocente!")
