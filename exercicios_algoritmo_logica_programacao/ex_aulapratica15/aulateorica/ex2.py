livros = {
    "001": ["Dom Casmurro", "Machado de Assis", 1899, 50],
    "002": ["Memórias Póstumas", "Machado de Assis", 1881, 40],
    "003": ["Reinações de Narizinho", "Monteiro Lobato", 1931, 51.90]
}

livro_desejado = input("Qual o nome do livro que você deseja procurar? ")
for chave, dados in livros.items():
    if dados[0] == livro_desejado:
        print(f"O livro é: {dados[0]}, foi escrito por {dados[1]}, foi lançado em {dados[2]} e custa R${dados[3]}.")
        break
    else:
        print("Livro não encontrado.")


codigo_livro_desejado = input("Qual o código do livro que deseja? ")
for chave, dados in livros.items():
    if chave == codigo_livro_desejado:
        print(f"O livro é: {dados[0]}, foi escrito por {dados[1]}, foi lançado em {dados[2]} e custa R${dados[3]}.")
        break
    else:
        print("Livro não encontrado.")

if dados[3] > 50:
    print (dados)