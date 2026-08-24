#include <stdio.h> // para leitura de dados
#include <string.h> // para trabalhar com strings
#include <ctype.h> // para transformar em upper ou lower

// EX 1
// int main(){
//     int nivel, senha, autorizacao;

//     printf("Digite nivel, senha e autorizacao: ");
//     scanf("%d %d %d", &nivel, &senha, &autorizacao);

//     if ((nivel > 5 && nivel <= 10) && (senha == 2026) && (autorizacao == 1 || autorizacao == 3)){
//         printf("Acesso liberado.");
//     }
//     else{
//         printf("Acesso negado.");
//     }
// }

// EX 2
// int main(){
//     int combustivel, temperatura, codigo;

//     printf("Digite os valores: ");
//     scanf("%d %d %d", &combustivel, &temperatura, &codigo);

//     if ((combustivel >= 60 && combustivel <= 100) && (temperatura < 80) && (codigo == 7 || codigo == 9)){
//         printf("Decolagem autorizada.");
//     }
//     else{
//         printf("Decolagem cancelada.");
//     }
// }

// EX 3
// int main() {

//     int pontos[6] = {3, 6, 9, 12, 15, 18};
//     int soma = 0;
//     int bonus = 0;

//     for (int i = 0; i <= 6; i++) {

//         if (pontos[i] % 3 == 0) {
//             soma += pontos[i];
//             bonus += 1;
//         }

//     }

//     int resultado = soma + bonus;

//     printf("%d %d %d\n", soma, bonus, resultado);

//     return 0;
// }
// a) O erro em questão é o overflow, pois o código do for, em sua ultima iteração tenta acessar uma parte do vetor que não existe na memória, assim, causando este erro e podendo acontecer comportamentos estranhos durante a execução do código.
// b) O overflow pode causar o encerramento do programa, ou fazer com que os dados extras invadem áreas adjacentes da memória, corrompendo outras variáveis.
// c) O for pode ser corrigido apenas removendo o sinal '=' do i <= 6.

// EX 5
// int main(){
//     int bateria = 180, eventos[12] = {1, 2, 3, 1, 7, 2, 2, 3, 1, 2, 1, 2}, qtdMovimentacoes = 0;

//     for (int i = 0; i < 12; i++){
//         if (bateria <= 0){
//             break;
//         }
//         switch (eventos[i])
//         {
//         case 1:
//             printf("Movimentacao comum.\n");
//             bateria -= 10;
//             qtdMovimentacoes++;
//             break;
//         case 2:
//             printf("Movimentacao pesada.\n");
//             bateria -= 25;
//             qtdMovimentacoes++;
//             break;
//         case 3:
//             printf("Recarga.\n");
//             bateria += 15;
//             break;
//         default:
//             break;
//         }
//     }
//     printf("Bateria final: %d\n", bateria);
//     printf("Movimentacoes: %d\n", qtdMovimentacoes);
//     return 0;
// }

// EX 6
// int main(){
//     int vida = 120, eventos[10] = {1, 3, 2, 8, 1, 2, 3, 2, 1, 2}, qtdAtaques = 0;

//     for (int i = 0; i < 10; i++){
//         if (vida <= 0){
//             printf("Vida insuficiente.\n");
//             break;
//         }
//         if (eventos[i] == 1){
//             printf("Ataque comum.\n");
//             vida -= 20;
//             qtdAtaques++;
//         }
//         else if(eventos[i] == 2){
//             printf("Ataque forte.\n");
//             vida -= 35;
//             qtdAtaques++;
//         }
//         else if (eventos[i] == 3){
//             printf("Pocao.\n");
//             vida += 15;
//         }
//     }

//     printf("Vida final: %d\n", vida);
//     printf("Quantidade de ataques: %d\n", qtdAtaques);
// }






// LISTA EXTRA
// EX 1
// int main(){
//     float notaProva;
//     int faltas, ingles, experiencias;

//     printf("Digite nota da prova: ");
//     scanf("%f", &notaProva);
//     printf("Digite faltas, ingles e experiencia: ");
//     scanf("%d %d %d", &faltas, &ingles, &experiencias);

//     if ((notaProva > 7 && notaProva <= 10) && (faltas < 2) && (ingles == 1 || experiencias == 1)){
//         printf("Candidato aprovado!");
//     }
//     else{
//         printf("Candidato reprovado.");
//     }
// }

// EX 2
int main(){

}