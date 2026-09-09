#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// EX 1
// int main(){
//     typedef struct {
//         char nome[30];
//         int idade;
//     } Pessoa;

//     Pessoa p = {"Marina", 21};
//     printf("%s tem %d anos.\n", p.nome, p.idade);
// }

// EX 2
// typedef struct {
//     char nome[30];
//     char pais[30];
//     float preco;
// } Destino;

// void imprimirDestino(Destino d){
//     printf("Destino: %s\n", d.nome);
//     printf("Pais: %s\n", d.pais);
//     printf("Preco: %.2f\n", d.preco);
// }

// int main(){
//     Destino d = {
//         "Paris",
//         "Franca",
//         12500.99
//     };
//     imprimirDestino(d);

// }

// EX 3
// typedef struct Aluno{
//     char nome[30];
//     float notas[3];
// } Aluno;

// void imprimirNotas(struct Aluno a){
//     printf("=== Informacoes ==\n");
//     printf("Nome: %s\n", a.nome);
//     for (int i = 0; i < 3; i++){
//         printf("Nota %d: %.2f\n", (i + 1), a.notas[i]);
//     }
// }

// int main(){
//     Aluno a = {
//         "Carlos",
//         {7.5, 8.0, 9.0}
//     };
//     imprimirNotas(a);
// }

// EX 4
// typedef struct {
//     char nome[30];
//     float temperatura;
//     float saturacao;
// } Paciente;

// bool emRisco (Paciente p){
//     if (p.temperatura >= 39 || p.saturacao < 92){
//         return true;
//     }
//     return false;
// }

// int main(){
//     Paciente p = {
//         "Jose",
//         38,
//         93
//     };
//     bool risco;
//     risco = emRisco(p);

//     printf("%s\n", (risco) ? "Em risco." : "Nao esta em risco!");
// }

// EX 5
// typedef struct{
//     char titulo[40];
//     int paginas;
//     float preco;
// } Livro;

// void imprimirLivros(Livro livros[4]){
//     for (int i = 0; i < 4; i++){
//         printf("Titulo: %s\n", livros[i].titulo);
//         printf("Paginas: %d\n", livros[i].paginas);
//         printf("Preco: %.2f\n", livros[i].preco);
//         printf("\n");
//     }
// }

// int main(){
//     Livro livros[4] = {
//         {"O Hobbit", 310, 45.90},
//         {"Dom Casmurro", 256, 29.90},
//         {"1984", 328, 39.50},
//         {"O Cortico", 240, 24.9}
//     };

//     imprimirLivros(livros);
// }
