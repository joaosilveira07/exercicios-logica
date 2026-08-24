#include <stdio.h>
#include <string.h>
#include <ctype.h>

// EX 1
// int main(){
//     float v[10], soma = 0;
//     int totalNumNegativo = 0;

//     for (int i = 0; i < 10; i++){
//         printf("Digite um numero: ");
//         scanf("%f", &v[i]);
        
//         if (v[i] < 0){
//             totalNumNegativo += 1;
//         }
//         else{
//             soma += v[i];
//         }
//     }

//     printf("Quantidade de negativos = %d\n", totalNumNegativo);
//     printf("Soma dos positivos = %.2f\n", soma);
//
//     return 0;
// }

// EX 2
// int main(){
//     int v[15], achou = 0;

//     for (int i = 0; i < 15; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &v[i]);

//         if(v[i] == 2){
//             printf("O valor 2 apareceu na posicao %d\n", v[i]);
//             achou = 1;
//         }
//     }

//     if (achou == 0){
//         printf("O numero 2 nao foi encontrado.");
//     }

//     return 0;
// }

// EX 3
// int main(){
//     int v[7];

//     for (int i = 0; i < 7; i++){
//         printf("Digite um numero: ");
//         scanf("%d", &v[i]);

//         if (v[i] % 2 == 0){
//             printf("O numero %d e multiplo de 2.\n", v[i]);
//         }
//         if (v[i] % 3 == 0){
//             printf("O numero %d e multiplo de 3.\n", v[i]);
//         }
//         if (v[i] % 2 == 0 && v[i] % 3 == 0){
//             printf("O numero %d e multiplo de 2 e 3.\n", v[i]);
//         }
//     }
// }

// EX 4
// int main(){
//     int v[12], qtdVagaLivre = 0, qtdVagaOcupada = 0;

//     for (int i = 0; i < 12; i++){
//         printf("Digite 0 para vaga livre ou 1 para vaga ocupada: ");
//         scanf("%d", &v[i]);

//         if (v[i] == 0){
//             qtdVagaLivre += 1;
//         }
//         else if (v[i] == 1){
//             qtdVagaOcupada =+ 1;
//         }
//         else{
//             printf("Opcao invalida!\n");
//         }
//     }
//     printf("Quantidade de vagas livres: %d\n", qtdVagaLivre);
//     printf("Quantidade vagas ocupadas: %d\n", qtdVagaOcupada);

//     printf("Posicoes livres: \n");
//     for (int i = 0; i < 12; i++){
//         if (v[i] == 0){
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

// EX 5
// int main(){
//     float v[6], menor;

//     for (int i = 0; i < 6; i++){
//         printf("Digite o valor em kWh: ");
//         scanf("%f", &v[i]);
//          
//         if (menor == 0){
//             menor = v[0];   
//         }
//         menor = v[0];

//         if (v[i] < menor){
//             menor = v[i];
//         }
//     }

//     for (int i = 0; i < 6; i++){
//         if(v[i] == menor){
//             printf("Posicao desse equipamento no vetor = %d", i);
//         }
//     }
// }

// EX 6
// int main(){
//     float v[15], maior = 0, menor = 0;
//     int posicaoMaior, posicaoMenor;

//     for (int i = 0; i < 15; i++){
//         printf("Digite um numero: ");
//         scanf("%f", &v[i]);

//         if (menor == 0){
//             menor = v[0];   
//         }
//         if (maior == 0){
//             maior = v[0];
//         }
//         if (maior < v[i]){
//             maior = v[i];
//             posicaoMaior = i;
//         }
//         if (menor > v[i]){
//             menor = v[i];
//             posicaoMenor = i;
//         }
//     }

//     printf("Maior valor: %.2f\nPosicao: %d\n", maior, posicaoMaior);
//     printf("Menor valor: %.2f\nPosicao: %d\n", menor, posicaoMenor);
// }

// EX 7
// int main(){
//     float v[10], soma = 0.0, media;

//     for (int i = 0; i < 10; i++){
//         printf("Digite, em milimetros, a quantidade de chuva de hoje: ");
//         scanf("%f", &v[i]);

//         soma += v[i];
//     }

//     media = soma / 10.0;
//     printf("Media dos 10 dias: %.2f\n", media);

//     for (int i = 0; i < 10; i++){
//         if (v[i] > media){
//             printf("%.2f ficou acima da media.\nPosicao: %d\n", v[i], i + 1);
//         }
//     }
// }

// EX 8
// int main() {
//     int v[6] = {5, 8, 10, 13, 15, 20};
//     int soma = 0;
    
//     for (int i = 0; i <= 6; i++) {
//         if (v[i] % 5 == 0)
//         soma += v[i];
//     }
    
//     printf("%d\n", soma);

//     return 0;
// }
// 1) IDENTIFIQUE O ERRO EXISTENTE NO CÓDIGO. R: O laço está com uma repetição a mais do que o a capacidade do vetor. O que provoca comportamento indefinido, o resultado será incorreto.
// 2) O QUE PODE ACONTECER DURANTE A EXECUÇÃO DO PROGRAMA? R: Pode ocorrer corrupção de memória, falha de segmentação ou apenas executar normalmente porém ter um resultado incorreto.
// 3) REESCREVA O LAÇO FOR DE MANEIRA CORRETA. R: for (int i = 0; i < 6; i++)
// 4) QUAL DEVE SER O VALOR CORRETO IMPRESSO PELO PROGRAMA? R: 50.

// EX 9
// int main(){
//     int A[5], B[5], acumulador;

//     for (int i = 0; i < 5; i++){
//         printf("Digite o valor do vetor A: ");
//         scanf("%d", &A[i]);
//     }

//     for (int i = 0; i < 5; i++){
//         printf("Digite o valor do vetor B: ");
//         scanf("%d", &B[i]);
//     }

//     for (int i = 0; i < 5; i++){
//         acumulador += A[i] - B[4 - i];
//     }

//     printf("Resultado acumulado: %d\n", acumulador);

//     return 0;
// }

// EX 10
// int main(){
//     char palavra[50];
//     int achou = 0;

//     printf("Digite a palavra: ");
//     scanf("%49s", palavra); OU fgets(palavra, sizeof(palavra), stdin);

//     int tamanho = strlen(palavra);

//     for (int i = 0; i < tamanho; i++){
//         if (palavra[i] == 'a'){
//             achou = 1;
//         }
//     }

//     if (achou){
//         printf("A palavra contem 'a'.");
//     }
//     else{
//         printf("A palavra nao contem 'a'.");
//     }

//     return 0;
// }

// EX 11
// int main(){
//     char nome1[50], nome2[50];
    
//     printf("Digite o nome do primeiro usuario: ");
//     fgets(nome1, sizeof(nome1), stdin);
    
//     printf("Digite o nome do segundo usuario: ");
//     fgets(nome2, sizeof(nome2), stdin);
    
//     if (tolower(strcmp(nome1, nome2)) == 0){
//         printf("Os dois nomes sao iguais.");
//     }
//     else{
//         printf("Os dois nomes sao diferentes.");
//     }

//     return 0;
// }

// EX 12
// int main(){
//     int qtdVogais = 0, qtdEspaco = 0, tamanho;
//     char frase[100];
//     tamanho = strlen(frase);
//     printf("Digite a frase: ");
//     fgets(frase, sizeof(frase), stdin);
    
//     for (int i = 0; i < tamanho; i++){
//         if (tolower(frase[i]) == 'a' || tolower(frase[i]) == 'e' || tolower(frase[i]) == 'i' || tolower(frase[i]) == 'o' || tolower(frase[i]) == 'u'){
//             qtdVogais += 1;
//         }
//     }
//     for (int i = 0; i < tamanho; i++){
//         if (frase[i] == ' '){
//             qtdEspaco += 1;
//         }
//     }
//     printf("Quantidade de Vogais: %d");
//     printf("Quantidade de Espacos: %d");
//     printf("Tamanho da frase: %d");
// }

// EX 14



// DESAFIO 1
// int main() {
//     int matricula[7];
//     float media[7];
//     float maiorMedia;
//     int posMaior = 0;
    
//     for (int i = 0; i < 7; i++) {
//         printf("Matricula do aluno %d: ", i);
//         scanf("%d", &matricula[i]);
        
//         printf("Media do aluno %d: ", i);
//         scanf("%f", &media[i]);
        
//         if (i == 0 || media[i] > maiorMedia) {
//             maiorMedia = media[i];
//             posMaior = i;
//         }
//     }
    
//     printf("Aluno com maior media: matricula %d - media %.2f\n", matricula[posMaior], maiorMedia);
    
//     printf("Alunos que precisam de exame:\n");
//     for (int i = 0; i < 7; i++) {
//         if (media[i] < 7) {
//         float notaExame = 10 - media[i];
        
//         printf("Matricula %d - nota minima no exame: %.2f\n", matricula[i], notaExame);
//         }
//     }
    
//     return 0;
//}

// DESAFIO 2
// int main(){
//     int vendedores[10], posMaior, posMenor;
//     float valorTotalVendidoPorVendedor[10], percentualComissao[10], comissao[10], maiorComissao, menorComissao, totalVendido = 0;

//     for (int i = 0; i < 10; i++){
//         printf("Digite o codigo do vendedor: ");
//         scanf("%d", &vendedores[i]);

//         printf("Digite o valor total vendido por este vendedor: ");
//         scanf("%f", &valorTotalVendidoPorVendedor[i]);

//         printf("Digite o percentual de comissao para este vendedor: ");
//         scanf("%f", &percentualComissao[i]);

//         totalVendido += valorTotalVendidoPorVendedor[i];

//         comissao[i] = valorTotalVendidoPorVendedor[i] * percentualComissao[i] / 100;
//         if(i == 0 || comissao[i] > maiorComissao){
//             maiorComissao = comissao[i];
//             posMaior = i;
//         }
//         if(i == 0 || comissao[i] < menorComissao){
//             menorComissao = comissao[i];
//             posMenor = i;
//         }
//     }

//     for (int i = 0; i < 10; i++){
//         printf("Codigo do vendedor: %d\n", vendedores[i]);
//         printf("Valor da comissao: %.2f\n", comissao[i]);
//     }
//     printf("Valor total vendido: %.2f\n", totalVendido);
//     printf("Maior valor de comissao: %.2f\nCodigo de quem ira receber: %d\n", maiorComissao, vendedores[posMaior]);
//     printf("Menor valor de comissao: %.2f\nCodigo de quem ira receber: %d\n", menorComissao, vendedores[posMenor]);
// }