preco_pc = float(input("Digite o preço da porca: "))
preco_pf = float(input("Digite o preço do parafuso: "))
preco_ar = float(input("Digite o preço da arruela: "))
nome = input("Digite seu nome: ")

desconto_pc = preco_pc / 0.1
desconto_pf = preco_pf / 0.2
desconto_ar = preco_ar / 0.3

total_compra = preco_pc + preco_pf + preco_ar
total_com_desconto = total_compra - desconto_pc - desconto_pf - desconto_ar
total_descontos = desconto_pc + desconto_pf + desconto_ar

print(f"Olá {nome}, o total da compra ficou {total_compra}, o total dos descontos é de {total_descontos:.2f}, então o total a se pagar é de {total_com_desconto:.2f}")
