// João Pedro Silveira de Souza RA: 26009261
// Luiz Gustavo Urias Vieira RA: 26006065

#include <stdio.h>

void exercicio01(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a == b){
        printf("Os numeros sao iguais. ");
    }
    else if (a > b){
        printf("Maior = %d", a);
    }
    else{
        printf("Maior = %d", b);
    }
}

void exercicio02(){
    int x1, x2, diferenca, modulo;

    diferenca = x1 - x2;

    if (diferenca >= 0){
        modulo = diferenca;
    }
    else{
        modulo = -diferenca;
    }
}

void exercicio02()
{
    int num1, num2, diferenca, modulo;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    diferenca = num1 - num2;
    if (diferenca >= 0) {
        modulo = diferenca;
    } else {
        modulo = -diferenca;
    }
    printf("O modulo da diferenca (|num1 - num2|) e: %d\n", modulo);
}

void exercicio03()
{
    float temp;
    printf("Digite a temperatura da agua: ");
    scanf("%f", &temp);
    if (temp < 25) {
        printf("A agua esta fria\n");
    } else if (temp <= 30) {
        printf("A agua esta morna\n");
    } else {
        printf("A agua esta quente\n");
    }
}

void exercicio04()
{
    float caixas, valor;
    printf("Digite quantas caixas voce deseja comprar: ");
    scanf("%f", &caixas);
    if (caixas < 10) {
        valor = 12.00;
        printf("Preco: 12.00\n");
    } else {
        valor = 9.50;
        printf("Preco: 9.50\n");
    }
}

void exercicio05()
{
    float h, peso;
    char sexo;
    printf("Digite a altura (em metros): ");
    scanf("%f", &h);
    printf("Digite o sexo (H para homem, M para mulher): ");
    scanf(" %c", &sexo);

    if (sexo == 'H' || sexo == 'h') {
        peso = 72.7 * h - 58.0;
        printf("O peso ideal e: %.2f\n", peso);
    } else if (sexo == 'M' || sexo == 'm') {
        peso = 62.1 * h - 44.7;
        printf("O peso ideal e: %.2f\n", peso);
    } else {
        printf("Erro: sexo invalido!\n");
    }
}

void exercicio06()
{
    float x, y, resultado;
    int op;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    printf("Digite a operacao (1-soma, 2-subtracao, 3-multiplicacao, 4-divisao): ");
    scanf("%d", &op);

    if (op == 1) {
        resultado = x + y;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == 2) {
        resultado = x - y;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == 3) {
        resultado = x * y;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == 4) {
        if (y == 0) {
            printf("Erro: divisao por zero!\n");
        } else {
            resultado = x / y;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Erro: operacao invalida!\n");
    }
}

void exercicio07()
{
    int n;
    float l, area;
    printf("Digite o numero de lados: ");
    scanf("%d", &n);
    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &l);

    if (n == 3) {
        area = (sqrt(3) / 4) * l * l;
        printf("TRIANGULO\n");
        printf("Area: %.2f\n", area);
    } else if (n == 4) {
        area = l * l;
        printf("QUADRADO\n");
        printf("Area: %.2f\n", area);
    } else if (n == 5) {
        printf("PENTAGONO\n");
    } else {
        printf("Erro: numero de lados invalido!\n");
    }
}

void exercicio08()
{
    float x1, x2, x3, x4, x5;
    float media, desvio, soma_quad;
    int acima = 0;

    printf("Digite x1: ");
    scanf("%f", &x1);
    printf("Digite x2: ");
    scanf("%f", &x2);
    printf("Digite x3: ");
    scanf("%f", &x3);
    printf("Digite x4: ");
    scanf("%f", &x4);
    printf("Digite x5: ");
    scanf("%f", &x5);

    media = (x1 + x2 + x3 + x4 + x5) / 5;

    soma_quad = (x1 - media) * (x1 - media)
              + (x2 - media) * (x2 - media)
              + (x3 - media) * (x3 - media)
              + (x4 - media) * (x4 - media)
              + (x5 - media) * (x5 - media);
    desvio = sqrt(soma_quad / 5);

    if (x1 > media) acima++;
    if (x2 > media) acima++;
    if (x3 > media) acima++;
    if (x4 > media) acima++;
    if (x5 > media) acima++;

    printf("Media: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);
    printf("Quantidade acima da media: %d\n", acima);
}

int main(){
    int op;

    do
    {
        printf("\nLista 02\n");
        printf("\nEscolha o numero do exercicio: ");
        scanf("%d", &op);

        switch (op){
            case 1: 
                exercicio01();
                break;
            case 2:
                exercicio02();
                break;
            case 3:
                exercicio03();
                break;
            case 4:
                exercicio04();
                break;
            case 5:
                exercicio05();
                break;
            case 6:
                exercicio06();
                break;
            case 7:
                exercicio07();
                break;
            case 8:
                exercicio08();
                break;
            default:
                printf("Opcao invalida!");
                break;
        }
    } while (op != 0);

    return 0;
}