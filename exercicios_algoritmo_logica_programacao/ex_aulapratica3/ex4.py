sal_func = float(input("Digite o valor do salário deste funcionário "))

if sal_func < 500.00:
    reajuste = 15
    novo_sal = sal_func * (reajuste / 100)
    print(f"O salário era de {sal_func} então o reajuste foi de {reajuste}%, portanto seu novo salário é de {sal_func + novo_sal}")
elif sal_func <= 1000:
    reajuste = 10
    novo_sal = sal_func * (reajuste / 100)
    print(f"O salário era de {sal_func} então o reajuste foi de {reajuste}%, portanto seu novo salário é de {sal_func + novo_sal}")
else:
    reajuste = 5
    novo_sal = sal_func * (reajuste / 100)
    print(f"O salário era de {sal_func} então o reajuste foi de {reajuste}%, portanto seu novo salário é de {sal_func + novo_sal}")
    
    
