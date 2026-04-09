salario_bruto = float(input("Digite o salário aqui "))
prestacao = float(input("Digite o valor da prestação "))
tempo_servico = int(input("Qual o tempo de serviço "))

if prestacao > (salario_bruto * 0.3):
    print("Empréstimo negado.")
elif tempo_servico > 2:
    print("Empréstimo aprovado com bônus!")
else:
    print("Empréstimo aprovado.")
