#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.14159
#define RHO 1000.0
#define G 9.81

// EX 1
// void calculoReservatorio(float raio, float altura, float *pArea, float *pPressao){
//     *pArea = 2 * PI * raio * altura;
//     *pPressao = RHO * G * altura;
// }

// int main()
// {
//     float raio, altura, area, pressao;
//     float area, pressao;
    
//     printf("Digite o raio em metros e a altura em metros: ");
//     scanf("%f %f", &raio, &altura);
    
//     calculoReservatorio(raio, altura, &area, &pressao);
//     printf("Area lateral: %.2f", area);
//     printf("Pressao: %.2f", pressao);
    
//     return 0;
// }

// EX 2
// struct tipo_instituicao {
//     char nome[30];
//     char tipo[20];
// };

// struct tipo_investimento {
//     char nome[30];
//     float valor_aplicado;
//     float taxa_rendimento;
//     struct tipo_instituicao instituicao;
//     float rendimentos[3];
// } Investimento[4] = {
//     {"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"}, {14.50, 15.20, 14.80}},
    
//     {"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"}, {30.10, 31.50, 29.90}},
    
//     {"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"}, {22.40, 21.80, 23.10}},
    
//     {"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"}, {48.00, 50.25, 47.90}}
// };

// float media_aplicaoes(){
//     float soma = 0.0, media;
    
//     for (int i = 0; i < 4; i++){
//         soma += Investimento[i].valor_aplicado;
//     }
//     media = soma / 4;
//     return media;
// }

// int num_tipo_instituicao(char tipo[20]){
//     int qtdTipoInstituicao = 0; 
    
//     for (int i = 0; i < 4; i++){
//         if (strcmp(tipo, Investimento[i].instituicao.tipo) == 0){
//             qtdTipoInstituicao++;
//         }
//     }
    
//     return qtdTipoInstituicao;
// }

// int conta_investimentos_letra(char letra){
//     int cont = 0;
    
//     for (int i = 0; i < 4; i++){
//         if (Investimento[i].nome[0] == letra){
//             cont++;
//         }
//     }
    
//     return cont;
// }

// float soma_rendimentos(char nome[30]){
//     float soma = 0.0;
    
//     for (int i = 0; i < 4; i++){
//         if (strcmp(nome, Investimento[i].nome) == 0){
//             for (int j = 0; j < 3; j++){
//                 soma += Investimento[i].rendimentos[j];
//             }
//         }
//         return soma;
//     }
//     return -1;
// }

// EX 3
// void atualizarBateria(int *bateria, int *consumo){
//     *consumo = (rand() % 26) + 10; 
//     *bateria -= *consumo;
// }

// int main(){
//     int bateria = 100;
//     int consumo;
//     srand(time(NULL));

//     printf("Bateria inicial: %d%%\n", bateria);

//     while (bateria > 0){
//         atualizarBateria(&bateria, &consumo);

//         printf("Consumo: %d%%\n", consumo);
//         printf("\nBateria: %d%%\n", bateria);
//     }

//     return 0;
// }

// EX 4
// int main(){
//     int energia = 40;
//     int bonus = 10;
//     int *p = &energia;
//     int *q = &bonus;
    
//     *p = *p + *q;
//     q = p;
//     *q = *q - 15;
//     bonus = bonus + 5;
    
//     printf("energia: %d\n", energia);
//     printf("bonus = %d\n", bonus);
    
//     return 0;
// } energia = 40; bonus = 10; *p &energia; *q &bonus;
//                             *p 50 &energia; 
//                                          *q 50 &energia;
//                                          *q 35 &energia;
//                 bonus = 15;   
//  energia = 35;  bonus = 15; *p 35 &energia; *q 35 &energia; 

// EX 5