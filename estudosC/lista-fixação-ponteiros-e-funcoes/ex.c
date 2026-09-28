#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.14159

// EX 1
// void inc_dec(int *a, int *b);

// int main(){
//     int a = 5;
//     int b = 5;
//     printf("Valores antes da funcao: A: %d, B: %d\n", a, b);
//     inc_dec(&a, &b);
//     printf("Valores depois da funcao: A: %d, B: %d\n", a, b);
// }

// void inc_dec(int *a, int *b){
//     *a += 1;
//     *b -= 1;
// }

// EX 2
// void troca_valor(float *x, float *y);

// int main(){
//     float n1, n2;
//     scanf("%f %f", &n1, &n2);
//     printf("N1: %.1f, N2: %.1f\n", n1, n2);
//     troca_valor(&n1, &n2);
//     printf("N1: %.1f, N2: %.1f\n", n1, n2);
//     return 0;
// }

// void troca_valor(float *x, float*y){
//     float temp = *x;
//     *x = *y;
//     *y = temp;
// }

// EX 3
// void calcula_circulo(float raio, float *pPerimetro, float *pArea);

// int main(){
//     float perimetro, area, raio;
//     printf("Digite o raio: ");
//     scanf("%f", &raio);
//     calcula_circulo(raio, &perimetro, &area);
//     printf("Perimetro: %.2f\n", perimetro);
//     printf("Area: %.2f\n", area);
// }

// void calcula_circulo(float raio, float *pPerimetro, float*pArea){
//     *pPerimetro = 2 * PI * raio;
//     *pArea = PI * (raio * raio);
// }

// EX 4
// void calcula_hora(int totalMinutos, int *pHora, int *pMinutos){
//     *pHora = totalMinutos / 60;
//     *pMinutos = totalMinutos % 60;
// }

// int main(){
//     int totalMin, horas, minutos;
//     printf("Digite o total de minutos: ");
//     scanf("%d", &totalMin);
//     calcula_hora(totalMin, &horas, &minutos);
//     printf("Hora atual: %d:%d\n", horas, minutos);
// }

// EX 5
// void max_min(int vet[], int tam, int *pMin, int *pMax){
//     *pMin = vet[0];
//     *pMax = vet[0];
//     for (int i = 1; i < tam; i++){
//         if (vet[i] > *pMax){
//             *pMax = vet[i];
//         }
//         if (vet[i] < *pMin){
//             *pMin = vet[i];
//         }
//     }
// }

// int main(){
//     int vet[] = {5, 6, 12, 134, 54, 1};
//     int tam = sizeof(vet) / sizeof(vet[0]);
//     int min, max;
//     max_min(vet, tam, &min, &max);
//     printf("Max: %d\n", max);
//     printf("Min: %d\n", min);
// }

// EX 6
// void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
//     *pMax = vet[0];
//     *pIndice = 0;
//     for (int i = 1; i < tam; i++){
//         if (vet[i] > *pMax){
//             *pMax = vet[i];
//             *pIndice = i;
//         }
//     }
// }

// int main(){
//     float vet[] = {2.5, 55.3, 102.4, 1.2, 152.4, 345.3}, max;
//     int tam = sizeof(vet) / sizeof(vet[0]), indice;

//     max_vetor(vet, tam, &max, &indice);
//     printf("Maior valor: %.2f\n", max);
//     printf("Posicao deste elemento no vetor: %d\n", indice + 1);
// }

// EX 7
// void calcular_movimento(float distancia, float tempo, float *velocidade, float *aceleracao){
//     *velocidade = distancia / tempo;
//     *aceleracao = *velocidade / tempo;
// }

// int main(){
//     float dist, tempo, vM, aM;
//     printf("Digite a distancia e o tempo: ");
//     scanf("%f %f", &dist, &tempo);
//     calcular_movimento(dist, tempo, &vM, &aM);
//     printf("vM = %.2f\n", vM);
//     printf("aM = %.2f\n", aM);
// }

// EX 8
// void registrar_venda(int vendidos, int *estoque){
//     *estoque -= vendidos;
// }

// int main(){
//     int estoque, vendidos;
//     printf("Digite o seu estoque atual: ");
//     scanf("%d", &estoque);
//     printf("Digite a quantidade vendida: ");
//     scanf("%d", &vendidos);
//     registrar_venda(vendidos, &estoque);
//     printf("Estoque restante: %d\n", estoque);
// }

// EX 9 e 10
// void calcula_clima(float tMin, float tMax, float *pMedia, float *pAmplitude){
//     *pMedia = (tMin + tMax) / 2;
//     *pAmplitude = tMax - tMin;
// }

// float calcula_indice(float tempMedia, float umidade){
//     float indice = (tempMedia + 0.05) * umidade;
//     return indice;
// }

// int main(){
//     float tMin, tMax, tMedia, amplitudeT, umidade;
//     printf("Digite a temperatura minima e maxima");
//     scanf("%f %f", &tMin, &tMax);
//     calcula_clima(tMin, tMax, &tMedia, &amplitudeT);
//     printf("Temp media: %.2f, Amplitude termica: %.2f\n", tMedia, amplitudeT);
//     printf("Digite a umidade: ");
//     scanf("%f", &umidade);
//     float indice = calcula_indice(tMedia, umidade);
//     printf("Indice de desconforto termico: %.2f\n", indice);
// }

// EX 11
/*
Qual das afirmativas abaixo é falsa?
(a) Se uma função não retorna nenhum valor, ela pode ser declarada como void. V
(b) O valor retornado por main pode ser utilizado pelo sistema operacional. V
(c) Arquivos como stdio.h e string.h contêm declarações de funções da biblioteca de C. V
(d) Em C padrão, uma função pode ser definida dentro de outra função. F
*/
