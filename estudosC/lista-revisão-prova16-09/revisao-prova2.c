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
// void alterar(int *x){
//     *x = *x + 10;
// }

// int main(){
//     int a = 5;
//     alterar(&a);
//     printf("%d\n", a);

//     return 0;
// } O programa executará normalmente porém o valor de a permanecerá em 5

// EX 6
// int main(){
//     int x = 10;
//     int *p = &x;

//     *p += 5;

//     printf("%d\n", *p);

//     return 0;
// }

// EX 7
// Sobre ponteiros em C, é incorreto afirmar que:
// A) Uma função pode alterar o valor de uma variável externa a ela se receber o endereço dessa variável
// B) Ponteiros podem ser usados com variáveis de qualquer tipo
// C) Um ponteiro armazena um endereço de memória, que pode ser obtido com o operador &
// D) Ponteiros podem ser modificados para apontar para diferentes endereços
// E) Ao utilizar um vetor como parâmetro de uma função, é disponibilizada à função uma cópia do seu primeiro elemento
//

// EX 8
// typedef struct {
//     char nome[20];
//     float nota1;
//     float nota2;
// } Aluno;

// float calcularMedia(Aluno a){
//     return (a.nota1 + a.nota2) / 2.0;
// }

// int main(){
//     Aluno turma[3] = {
//         {"Ana", 10.0, 5.0},
//         {"Bruno", 6.0, 5.0},
//         {"Carla", 9.0, 8.0}
//     };

//     int maior = 0;

//     for (int i = 0; i < 3; i++){
//         if (calcularMedia(turma[i]) > calcularMedia(turma[maior])){
//             maior = i;
//         }
//     }

//     printf("%s %.1f\n", turma[maior].nome, calcularMedia(turma[maior]));

//     return 0;
// }

// LISTA DE EX GERADO POR IA
// PONTEIROS BÁSICOS

// EX 1
// int main(){
//     int x = 7, *p = &x;

//     printf("Valor de x pelo ponteiro: %d", *p);
// }

// EX 2
// void dobrar(int *n){
//     *n = *n * 2;
// }

// int main(){
//     int num = 10;

//     printf("Antes da funcao: %d\n", num);
//     dobrar(&num);
//     printf("Depois da funcao: %d\n", num);
// }

// EX 3
// void trocar(int *a, int *b){
//     int *c = a;

//     printf("Valor de A: %d\n", *a);
//     printf("Valor de B: %d\n", *b);

//     a = b;
//     b = c;

//     printf("Valor de A: %d\n", *a);
//     printf("Valor de B: %d\n", *b);
// }

// int main(){
//     int x = 3, y = 9;
//     trocar(&x, &y);
// }

// EX 4
// void ajustarTemperatura(float *temp, float variacao){
//     *temp += variacao;
// }

// int main(){
//     float temp = 22.5, *p = &temp;
//     float variacao = 2;

//     ajustarTemperatura(p, variacao);
//     printf("%.2f", temp);
// }

// EX 5
// int main(){
//     int a = 20, b = 5;
//     int *p = &a;
//     int *q = &b;

//     *p = *p - *q;
//     q = p;
//     *q += 10;
//     b = b * 2;

//     printf("%d %d", a, b);
// }

// Structs
// EX 1
// typedef struct{
//     char nome[30];
//     float preco;
// } Produto;

// int main(){
//     Produto p = {
//         {"Joao"}, 139.9
//     };

//     printf("Nome: %s\n", p.nome);
//     printf("Preco: %.2f\n", p.preco);
// }

// EX 2
// struct produtos{
//     char nome[30];
//     float preco;
// } Produtos[3] = {
//     {"Shampoo", 35.90},
//     {"Condicionador", 12.90},
//     {"Desodorante", 20.0}
// };

// int main(){
//     for (int i = 0; i < 3; i++){
//         printf("Nome: %s\n", Produtos[i].nome);
//         printf("Preco: %.2f\n", Produtos[i].preco);
//     }
// }

// EX 3
// struct Endereco {
//     char rua[50];
//     char cidade[40];
// };

// struct Cliente {
//     char nome[40];
//     int idade;
//     struct Endereco endereco;
// };

// int main(){
//     struct Cliente c;
    
//     printf("Digite o nome do cliente: ");
//     scanf("%39s", c.nome);
//     printf("Digite a idade do cliente: ");
//     scanf("%d", &c.idade);
//     printf("Digite a rua do cliente: ");
//     scanf("%49s", c.endereco.rua);
//     printf("Digite a cidade do cliente: ");
//     scanf("%39s", c.endereco.cidade);

//     printf("Nome: %s\n", c.nome);
//     printf("Idade: %d\n", c.idade);
//     printf("Rua: %s\n", c.endereco.rua);
//     printf("Cidade: %s\n", c.endereco.cidade);
// }

// EX 4
// struct Endereco {
//     char rua[50];
//     char cidade[40];
// };

// typedef struct {
//     char nome[30];
//     float salario;
//     struct Endereco endereco;
// } Funcionario;

// Funcionario equipes[4] = {
//     {"Jose", 2000.0, {"Cactos", "Americana"}},
//     {"Luiz", 15000.0, {"Ipe", "Paulinia"}},
//     {"Joao", 4500.20, {"Carioba", "Limeira"}},
//     {"Ana", 8500.90, {"Munhoz", "Campinas"}}
// };

// float somaSalarios(int n){
//     float soma = 0.0;

//     for (int i = 0; i < 4; i++){
//         soma += equipes[i].salario;
//     }

//     return soma;
// }

// EX 5
struct tipo_instituicao {
    char nome[30];
    char tipo[20];
};

struct tipo_investimento {
    char nome[30];
    float valor_aplicado;
    float taxa_rendimento;
    struct tipo_instituicao instituicao;
    float rendimentos[3];
} Investimento[4] = {
    {"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"}, {14.50, 15.20, 14.80}},
    
    {"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"}, {30.10, 31.50, 29.90}},
    
    {"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"}, {22.40, 21.80, 23.10}},
    
    {"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"}, {48.00, 50.25, 47.90}}
};

void maiorSoma(char *pNome[], float *pMaiorSoma){
    float soma = 0.0, maiorSoma;
    int maior = 0;

    for (int i = 0; i < 4; i++){
        soma = 0.0;
        for (int j = 0; j < 3; j++) {
            soma += Investimento[i].rendimentos[j];
        }
        if (i == 0 || soma > maiorSoma){
            maiorSoma = soma;
            maior = i;
        }
    }

    *pNome = Investimento[maior].nome;
    *pMaiorSoma = maiorSoma;
}
