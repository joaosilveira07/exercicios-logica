alunos = {
    26009261: ["João", 6],
    26009260: ["Luiz", 6],
    26009259: ["Matheus", 5],
    26009258: ["Pedro", 3.5],
    26009257: ["Enzo", 2],
    26009256: ["Thomas", 3]
}

ra_busca = int(input("Digite o RA do aluno que você quer buscar: "))
if ra_busca in alunos:
    print(alunos[ra_busca])
else:
    print("Aluno não encontrado!")

print("ALUNOS COM MÉDIA MAIOR OU IGUAL A 5:")
for aluno in alunos:
    if alunos[aluno][1] >= 5:
        print(alunos[aluno])