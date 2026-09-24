#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// EX 1
// int main(){
//     int pontos[4] = {10, 20, 30, 40};
//     int *p = pontos;
// } I) O ponteiro p aponta inicialmente para pontos[0]; II) O valor de *p no início é 10; III) O valor de *(p+2) é 30; IV) Após o comando p++;, o ponteiro passa a apontar para p[1]

// EX 2
// int main(){
//     int ingredientes[3] = {5, 8, 11};
//     int *hedwig = ingredientes;
// } a) O valor de *(hedwig+1) é 8; b) O comando (*hedwig)++; faz com que o primeiro valor do vetor seja incrementado; c) O comando hedwig++;, faz com que o ponteiro avance para o próximo elemento

// EX 3
// int main(){
//     int moedas[3] = {12, 18, 25};
//     int *p = moedas;

//     (*p) += 3;
//     p++;
//     (*p)--;
//     p++;
//     (*p) += moedas[0];

//     printf("%d %d %d\n", moedas[0], moedas[1], moedas[2]);
//     return 0;
// } // moedas[0] = 15, moedas[1] = 17, moedas[2] = 40

// EX 4
// int main(){
//     int magia[3] = {11, 7, 4};
//     int *hedwig = magia;

//     (*hedwig)++; // incrementa no i[0]
//     hedwig++; // avanca uma posicao no vetor
//     (*hedwig) += 5; // incrementa 5 no i[1]
//     hedwig = magia; // volta a apontar para o elemento 0 do vetor
//     *(hedwig + 2) = *hedwig + *(hedwig + 1); //acessa a posicao 2 do vetor e depois pega seu valor, então incrementa o valor do i[0] + o valor do i[1].

//     printf("%d %d %d\n", magia[0], magia[1], magia[2]);
//     return 0;
// } // magia[0] = 12, magia[1] = 12, magia[2] = 24

// EX 5
// int main(){
//     int leituras[4] = {21, 23, 26, 24};
//     int *p = leituras;
// } 
/*
    EXPRESSÃO               RESULTADO   
    p                       endereço do primeiro elemento do vetor
    *p                      valor do endereco do primeiro elemento do vetor
    *(p+1)                  valor do endereco do segundo elemento do vetor
    leituras[2]             valor do terceiro elemento do vetor
    *(p+3)                  valor do endereco do terceiro elemento do vetor
*/

// EX 6
// int main(){
//     int producao[3] = {100, 130, 125};
//     int *p = producao;
// }
/*
    EXPRESSÃO               RESULTADO
    producao[0]             valor da posicao 0 do vetor
    *p                      valor do endereco da posicao 0 do vetor
    producao[1]             valor da posicao 1 do vetor
    *(p+1)                  valor do endereco da posicao 1 do vetor
    producao[2]             valor da posicao 2 do vetor
    *(p+2)                  valor do endereco da posicao 2 do vetor
*/

// EX 7
// int main(){
//     int voltas[3] = {15, 18, 20};
//     int *p;
//     *p = voltas;
//     printf("%d\n", *p);
//     return 0;
// } // O código usa *p = voltas, mas *p representa um valor inteiro, enquanto voltas representa o endereço do primeiro elemento do vetor. 
  // Além disso, p ainda não foi inicializado e, portanto, não aponta para um endereço válido. O correto seria atribuir voltas diretamente a p, usando p = voltas.
  // O código correto seria int *p = voltas; em sua inicialização.

// EX 8
// int main(){
//     float notas[2] = {9.5, 8.0};
//     float *p = notas;
//     printf("%f\n", p);
//     return 0;
// } // O erro está no print, o código tenta imprimir um valor float, mas na variável colocar apenas p, que contém o valor de endereço de memória. 
  // O correto seria escrever *p no printf.

// EX 9
// int main(){
//     int estoque[3] = {40, 22, 15};
//     int *p = estoque;

//     printf("%d\n", *(p+1)); // Tem que ser p+1, pois o p normal aponta para a posicao 0 (que é a primeira do vetor), já com o p+1 aponta para a posicao 1 (que é a segunda do vetor).
//     return 0;
// }

// EX 10
// int main(){
//     int energia[3] = {50, 60, 70};
//     int *p = energia;
//     printf("Primeiro valor: %d\n", *p);
//     printf("Segundo valor: %d\n", *(p+1));
//     printf("Terceiro valor: %d\n", *(p+2));
//     *(p+1) = 80;
//     printf("Vetor Final: ");
//     printf("[ ");
//     for (int i = 0; i < 3; i++){
//         printf("%d ", *p);
//         p++;
//     }
//     printf("]");
// }

// EX 11
// int main(){
//   char codigos[3] = {'A', 'B', 'C'};
//   char *p = codigos;
//   printf("Primeiro char: %c\n", *p);
//   printf("Segundo char: %c\n", *(p+1));
//   printf("Terceiro char: %c\n", *(p+2));
//   *(p + 2) = 'C';
//   printf("[");
//   for (int i = 0; i < 3; i++){
//     printf("%c, ", *p);
//     p++;
//   }
//   printf("]");
// }

// EX 12
// int main(){
//   char palavra[] = "Sol";
// } // a) o valor armazenado em p é o endereço de memória do primeiro elemento do vetor; b) o valor de *p é S; c) o valor de *(p+1) é o; d) o valor de *(p+2) é l;
//      e) O que existe em *(p + 3). R: Em *(p+3) contém o caractere nulo.

// EX 13
// int main(){
//   char nome[] = "Lua";
//   char *p = nome;

//   printf("%c\n", *(p++)); // pós incremento, primeiro printa o valor atual de *p e depois incrementa
//   printf("%c\n", *p); // Como foi incrementado na linha anterior, printa u
//   *(p + 1) = 'R'; // Avança para o 3 elemento do vetor e muda para R
//   printf("%s\n", nome); // printa LuR

//   return 0;
// } // a) o caractere impresso no primeiro print é L; b) para o segundo elemento do vetor, u; c) u; d) LuR;

// EX 14
int main(){
  int valores[3];
  int *p = valores;
  scanf("%d", p);
  printf("%d\n", valores[0]);
} // a) o comando faz leitura de valores[0], pois o ponteiro p recebeu o endereço de memória do primeiro elemento do vetor, ou seja, valores[0].
