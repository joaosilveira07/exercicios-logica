sal_func = float(input("Digite o salário deste funcionário: "))
reajuste = float(input("Qual será o percentual de reajuste salarial deste funcionário? "))
novo_sal = sal_func * (reajuste / 100)

print("O novo salário deste funcionário será de: ", sal_func + novo_sal)
