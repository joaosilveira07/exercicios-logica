filmes = {
    1: ["Vingadores", "Joe Russo", 2021],
    2: ["O diabo veste prada 2", "Spielberg", 2026],
    3: ["Mamma Mia", "Phyllia Lloyd", 2008]
}

busca_titulo = input("Qual o título do filme que quer buscar? ")
for filme in filmes:
    if filmes[filme][0] == busca_titulo:
        print(filmes[filme])

print("FILMES LANÇADOS APÓS 2020:")
for filme in filmes:
    if filmes[filme][2] >= 2020:
        print(filmes[filme])
    