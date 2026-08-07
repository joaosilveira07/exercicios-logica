def vogais_por_palavra(frase):
    vogais = "aeiou"
    resultado = []
    for palavra in frase.split():
        count = 0
        for letra in palavra:
            if letra in vogais:
                count += 1
        resultado.append((palavra, count))
    return resultado

frase = vogais_por_palavra("python é legal")
print(frase)