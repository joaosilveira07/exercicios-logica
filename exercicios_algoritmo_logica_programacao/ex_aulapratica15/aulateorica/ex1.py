perguntas = ["Telefonou para a vítima?", "Esteve no local do crime?", "Mora perto da vítima?", "Devia para a vítima?", "Já trabalhou com a vítima?"]
cont_respostas = 0
for i in perguntas:
    print(i)
    resposta = input("Responda com S/N ")
    if resposta == "S":
        cont_respostas += 1

if cont_respostas == 2:
    pessoa = "Suspeita"
elif 3 <= cont_respostas <= 4:
    pessoa = "Cúmplice"
elif cont_respostas == 5:
    pessoa = "Culpado"
else:
    pessoa = "Inocente"

print(pessoa)