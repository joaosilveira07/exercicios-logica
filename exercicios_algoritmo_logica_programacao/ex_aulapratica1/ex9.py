valor_compra = float(input("Digite o valor da compra: "))
valor_pag = float(input("Digite o valor do pagamento: "))
troco = valor_pag - valor_compra

print(f"Compra: R${valor_compra:.2f}")
print(f"Pagamento: R${valor_pag:.2f}")
print(f"Troco: R${troco:.2f}")
