#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// EX 1
// bool aprovado(float media, int faltas) {
//     return media >= 7 && faltas <= 10;
// }

// int main(){
//     float media = 8.0;
//     int faltas = 10;

//     printf("%d", aprovado(media, faltas));
// }

// EX 2
// float calcularValor(float precoHora, int horas) {
//     return (precoHora * horas) * 30;
// }

// int main(){
//     float precoHora;
//     int horas;

//     printf("Digite o preco por hora: ");
//     scanf("%f", &precoHora);
//     printf("Digite as horas: ");
//     scanf("%d", &horas);
//     printf("Valor do aluguel: %.2f\n", calcularValor(precoHora, horas));
// }

// EX 3
// Considere o programa:
// void aumentarNivel(int nivel) {
//      nivel += 2;
// }
// int main() {
//      int nivel = 5;
//      aumentarNivel(nivel);
//      printf("%d\n", nivel);
//      return 0;
// }
// Responda:
// • Qual valor será mostrado na tela? R: 5
// • Por que a variável nivel declarada em main não é alterada pela função? R: por que a variavel da função é diferente da variável do main.
// Faca um teste de mesa acompanhando o valor de nivel no programa principal e dentro da função R: nivelMain = 5, nivelFuncao = 5, nivelMain = 5, nivelFuncao = 7;

// EX 4
// int contarMaioresQue(float v[5], float limite) {
//     int cont = 0;
//     for (int i = 0; i < 5; i++) {
//         if (v[i] > limite) {
//             cont += 1;
//         }
//     }
//     return cont;
// }

// int main() {
//     float v[5] = {3.5, 8.0, 2.0, 9.5, 5.0}, limite = 5.0;

//     printf("%d numeros do vetor sao maiores que a variavel limite.", contarMaioresQue(v, limite));
// }

// EX 5
// float taxaEntrega(int codigo){
//     switch (codigo) {
//         case 1: 
//             return 8.0;
//             break;
//         case 2:
//             return 15.0;
//             break;
//         case 3:
//             return 25.0;
//             break;
//         default: 
//             printf("Codigo invalido.");
//             return -1;
//             break;
//     }
// }

// int main() {
//     int codigo;
//     scanf("%d", &codigo);
//     printf("Taxa de entrega: %.2f", taxaEntrega(codigo));
// }

// EX 6
// int podeSair(int pagamento, int ticketValidado) {
//     if (pagamento == 1 && ticketValidado == 1) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main(){
//     int pagamento, ticketValidado, isLiberado;

//     printf("Digite 1 se o pagamento e o ticket foi validado, caso contrário digite qualquer outro numero.");
//     scanf("%d %d", &pagamento, &ticketValidado);
//     isLiberado = podeSair(pagamento, ticketValidado);
//     if (isLiberado){
//         printf("Pode sair!");
//     }
//     else {
//         printf("Nao pode sair.");
//     }

// }

// EX 7
// int atingiuMeta (int passos, int meta){
//     return (passos >= meta) ? 1 : 0;
// }

// int main() {
//     int passos = 10000, meta = 12000, atingiu;

//     atingiu = atingiuMeta(passos, meta);
//     if (atingiu){
//         printf("Voce atingiu sua meta de %d passos, fazendo %d passos hoje!", meta, passos);
//     }
//     else {
//         printf("Voce nao atingiu sua meta diaria hoje.");
//     }
// }

// EX 8
// int somaAmostra(int pop[4][3], int linha) {
//     int soma = 0;

//     for (int j = 0; j < 3; j++){
//         soma += pop[linha][j];
//     }
//     return soma;
    
// }

// int main(){
//     int linha = 2, soma;
//     int pop[4][3] = {
//         {10, 12, 15},
//         {8, 9, 11},
//         {20, 25, 30},
//         {7, 10, 13}
//     };


//     soma = somaAmostra(pop, linha);
//     printf("%d", soma);


// }

// EX 9
// float mediaTemperaturas(float temperaturas[7]){
//     float somaTemp = 0;
//     float media;

//     for (int i = 0; i < 7; i++){
//         somaTemp += temperaturas[i];
//     }
//     return media = somaTemp / 7;
// }

// int diasAcimaDaMedia(float temperatura[7], float media){
//     int diasAcima = 0;
    
//     for (int i = 0; i < 7; i++){
//         if (temperatura[i] > media){
//             diasAcima++;
//         }
//     }
//     return diasAcima;
// }

// int main(){
//     float temperaturas[7] = {22.0, 25.0, 24.0, 28.0, 21.0, 26.0, 29.0};
//     int diasAcima;
//     float media;

//     media = mediaTemperaturas(temperaturas);
//     diasAcima = diasAcimaDaMedia(temperaturas, media);
//     printf("Media = %.2f\n", media);
//     printf("Dias acima da media = %d\n", diasAcima);
// }

// EX 10
// float mediaAvaliacoes(float notas[6]){
//     float soma = 0;
//     int cont = 0;
//     for (int i = 0; i < 6; i++){
//         if (notas[i] == -1){
//             continue;
//         }
//         soma += notas[i];
//         cont++;
//     }
//     return soma / cont;
// }

// int main(){
//     float notas[6] = {7.5, 6.3, -1, -1, 5.5, 10.0};
//     float media = mediaAvaliacoes(notas);

//     printf("Media = %.2f", media);
// }

// EX 11
// int contarVogais(char texto[100]){
//     int tamanho = strlen(texto), qtdVogais = 0;
//     for (int i = 0; i < tamanho; i++){
//         char letraAtual = tolower(texto[i]);
//         if (letraAtual  == 'a' || letraAtual  == 'e'  || letraAtual  == 'i'  || letraAtual  == 'o'  || letraAtual  == 'u' ){
//             qtdVogais++;
//         }
//     }

//     return qtdVogais;
// }

// int main(){
//     int qtdVogais;
//     char texto[100];
//     fgets(texto, sizeof(texto), stdin);


//     qtdVogais = contarVogais(texto);
//     printf("%d", qtdVogais);
// }

// EX 12
// int maiorValor(int v[5]){
//     int maior;
//     for (int i = 0; i < 5; i++){
//         if (i == 0 || v[i] > maior){
//             maior = v[i];
//         }
//     }
//     return maior;
// }

// EX 13
// void gerarPontuacoes(int pontuacoes[5]){
//     for (int i = 0; i < 5; i++){
//         pontuacoes[i] = rand() % 11;
//     }
// }

// int maiorPontuacao(int pontuacoes[5]){
//     int maior = pontuacoes[0];
//     for (int i = 1; i < 5; i++){
//         if (pontuacoes[i] > maior){
//             maior = pontuacoes[i];
//         }
//     }
//     return maior;
// }

// int main(){
//     int pontuacoes[5];
//     srand(time(NULL));

//     gerarPontuacoes(pontuacoes);
//     printf("Pontuacoes: ");
//     for (int i = 0; i < 5; i++){
//         printf("%d\n", pontuacoes[i]);
//     }
//     printf("\nMaior Pontuacao: %d\n", maiorPontuacao(pontuacoes));
// }

// EX 14
// float calcularIngresso(int idade, bool estudante){
//     float preco = 50.0;

//     if (idade < 12){
//         preco = 25.0;
//     }
//     else if (estudante){
//         preco - preco * 0.8;
//     }

//     return preco;
// }

// int main(){
//     int idade = 10;
//     bool estudante = true;
//     float preco;

//     preco = calcularIngresso(idade, estudante);
//     printf("Preco: %.2f", preco);
// }

// EX 15
