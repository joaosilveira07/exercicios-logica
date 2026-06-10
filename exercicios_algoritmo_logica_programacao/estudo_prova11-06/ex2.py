livros = {
    1: ["O pequeno príncipe", "Antoine de Saint-Exupéry", 35.90],
    2: ["Dom Casmurro", "Machado de Assis", 29.90],
    3: ["1984", "George Orwell", 52.00],
    4: ["Inferno de Dante", "Dante Alighieri", 54.90]
}

busca = input("Digite o título: ")
for livro in livros:
    if livros[livro][0] == busca:
        print(livros[livro])


codigo = int(input("Digite o código: "))
if codigo in livros:
    print(livros[codigo])

for livro in livros:
    if livros[livro][2] >= 50:
        print(livros[livro])
