servico = 30
dias_trabalhados = int(input("Quantos dias o encanador precisou para terminar o serviço? "))
total = servico * dias_trabalhados
total_imp = total * 0.92

print(f"O encanador precisou de {dias_trabalhados} para finalizar o serviço, portanto o total do serviço custou R${total}.\nPorém é descontado um imposto de 8%, então o total a ser pago já descontado do imposto é de R${total_imp}")
