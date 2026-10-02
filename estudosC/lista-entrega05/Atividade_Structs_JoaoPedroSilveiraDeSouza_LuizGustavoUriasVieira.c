// João Pedro Silveira de Souza RA: 26009261
// Luiz Gustavo Urias Vieira RA: 26005065

#include <stdio.h>
#include <string.h>

// EX 1
// typedef struct {
// 	int cod_livro;
// 	char titulo[100];
// 	int status_emprestimo;
// } Livro;

// // 1 a)
// void preencherLivro(Livro* pLivro, int codigo, char titulo[], int status_emprestimo) {
// 	pLivro -> cod_livro = codigo;
// 	strcpy(pLivro -> titulo, titulo);
// 	pLivro -> status_emprestimo = status_emprestimo;
// }

// // 1 b)
// void emprestarLivro(Livro* pLivro) {
// 	if (pLivro -> status_emprestimo == 0) {
// 		pLivro -> status_emprestimo = 1;
// 		printf("Status do livro alterado para emprestado!\n");
// 	} else {
// 		printf("O livro nao esta disponivel.\n");
// 	}
// }

// // 1 c)
// void devolverLivro(Livro* pLivro) {
// 	if(pLivro -> status_emprestimo == 1) {
// 		pLivro -> status_emprestimo = 0;
// 		printf("Status do livro alterado para disponivel!\n");
// 	} else {
// 		printf("O livro nao esta emprestado\n");
// 	}
// }

// // 1 d)
// Livro* buscar_livro(Livro livros[], int tamanho, int cod_busca) {
// 	for (int i = 0; i < tamanho; i++) {
// 		if (cod_busca == livros[i].cod_livro) {
// 			return &livros[i];
// 		}
// 	}
// 	return NULL;
// }

// int main()
// {
// 	Livro livros[2];
// 	preencherLivro(&livros[0], 1, "Pequeno Principe", 0);
// 	preencherLivro(&livros[1], 2, "Dom Casmurro", 1);

// 	emprestarLivro(&livros[0]);
// 	devolverLivro(&livros[1]);

//     buscar_livro(&livros[0], 2, 1);

// 	return 0;
// }

// EX 2
// typedef struct {
// 	char nome_banda[80];
// 	char genero_musical[100];
// } Banda;

// typedef struct {
// 	char nome_aluno[100];
// 	int ra;
// 	Banda banda_favorita;
// } Alunos;

// typedef struct {
// 	char nome_equipe[80];
// 	Alunos alunos[2];
// } Equipe;

// // 2 a)
// void preencherBanda(Banda *pBanda, char nome_banda[], char genero_musical[]) {
// 	strcpy(pBanda -> nome_banda, nome_banda);
// 	strcpy(pBanda -> genero_musical, genero_musical);
// }

// // 2 b)
// void preencherAluno(Alunos *pAluno, char nome_aluno[], int ra, Banda banda_favorita) {
// 	strcpy(pAluno -> nome_aluno, nome_aluno);
// 	pAluno -> ra = ra;
// 	pAluno -> banda_favorita = banda_favorita;
// }

// // 2 c)
// void preencherEquipe(Equipe *pEquipe, char nome_equipe[], Alunos alunos[]) {
// 	strcpy(pEquipe -> nome_equipe, nome_equipe);
// 	pEquipe -> alunos[0] = alunos[0];
// 	pEquipe -> alunos[1] = alunos[1];
	
// }

// // 2 d)
// void imprimirEquipe(Equipe e) {
// 	printf("Equipe: %s\n", e.nome_equipe);
// 	for (int i = 0; i < 2; i++){
// 	    printf("Integrante %d: %s\n", (i + 1), e.alunos[i].nome_aluno);
// 		printf("RA: %d\n", e.alunos[i].ra);
// 		printf("Banda favorita: %s\n", e.alunos[i].banda_favorita);
// 	}
// }


// int main() {
// 	Banda bandas[2];
// 	preencherBanda(&bandas[0], "Metallica", "Rock Metal");
// 	preencherBanda(&bandas[1], "One Direction", "Pop");

// 	Alunos vAlunos[2];
// 	preencherAluno(&vAlunos[0], "LEANDRO PAPA KILL", 26009261, bandas[0]);
// 	preencherAluno(&vAlunos[1], "JEFFERSON CAMINHOES", 26005065, bandas[1]);

// 	Equipe equipeRocket;
//     preencherEquipe(&equipeRocket, "Equipe Rocket", vAlunos);

// 	imprimirEquipe(equipeRocket);

// 	return 0;
// }

// EX GERADOS POR IA PARA FIXAR
// EX 1
typedef struct {
	char titulo[100];
	char autor[80];
	int ano_publicacao;
} Livro;

typedef struct {
	char nome[100];
	int ra;
	Livro livro_favorito;
} Leitor;

typedef struct {
	char nome_biblioteca[80];
	Livro livros[3];
} Biblioteca;

void preencherLivro(Livro *pLivro, char titulo[], char autor[], int ano){
	strcpy(pLivro -> titulo, titulo);
	strcpy(pLivro -> autor, autor);
	pLivro -> ano_publicacao = ano;
}

void preencherLeitor(Leitor *pLeitor, char nome[], int ra, Livro livro_fav){
	strcpy(pLeitor -> nome, nome);
	pLeitor -> ra = ra;
	pLeitor -> livro_favorito = livro_fav;
}

void preencherBiblioteca(Biblioteca *pBiblioteca, char nome[], Livro livros[], int tamanho){
	strcpy(pBiblioteca -> nome_biblioteca, nome);
	for (int i = 0; i < tamanho; i++){
		pBiblioteca -> livros[i] = livros[i];
	}
}

void imprimirBiblioteca(Biblioteca b, int tamanho){
	printf("\nBiblioteca: %s\n", b.nome_biblioteca);
	for (int i = 0; i < tamanho; i++){
		printf("Livro %d: Titulo: %s\n", (i + 1), b.livros[i].titulo);
		printf("Livro %d: Autor: %s\n", (i + 1), b.livros[i].autor);
		printf("Livro %d: Publicacao: %d\n", (i + 1), b.livros[i].ano_publicacao);
	}
}

int main(){
	Livro l[3];
	preencherLivro(&l[0], "O Hobbit", "J.R.R Tolkien", 1937);
	preencherLivro(&l[1], "1984", "George Orwell", 1949);
	preencherLivro(&l[2], "Ursinho Pooh", "Walt Disney", 2010);

	Leitor leitores;
	preencherLeitor(&leitores, "Matheus", 23440200, l[2]);
	printf("Leitor: %s\n", leitores.nome);
	printf("RA: %d\n", leitores.ra);
	printf("Livro favorito: %s\n", leitores.livro_favorito.titulo);

	Biblioteca b;
	preencherBiblioteca(&b, "Biblioteca Central", l, 3);

	imprimirBiblioteca(b, 3);
}