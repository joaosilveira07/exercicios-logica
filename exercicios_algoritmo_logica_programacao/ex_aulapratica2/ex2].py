cot_dolar = float(input("Digite a cotação atual do dólar: "))
valor_dolar = float(input("Digite um valor em dólar: "))
valor_real = valor_dolar * cot_dolar

print(f"O valor {valor_dolar} em reais fica {valor_real:.2f}")
