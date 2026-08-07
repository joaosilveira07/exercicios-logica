def classificar_senha(senha):
    tem_digito = False
    for caractere in senha:
        if caractere.isdigit():
            tem_digito = True
    if len(senha) < 6:
        return "Senha Fraca"
    elif 6 <= len(senha) <= 9:
        return "Senha Média"
    elif len(senha) >= 10 and tem_digito == True:
        return "Senha Forte"
    elif len(senha) >= 10:
        return "Senha Média"
    
senha = classificar_senha("seguranca123")
print(senha)