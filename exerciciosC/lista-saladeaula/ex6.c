#include <stdio.h>

int main(){
    int valorPago, valorProduto, nota50;

    printf("Qual o valor do produto? ");
    scanf("%d", &valorProduto);
    printf("Qual o valor pago pelo cliente? ");
    scanf("%d", &valorPago);

    int troco = valorPago - valorProduto;
    printf("Troco: %d\n", troco);

    nota50 = troco / 50;
    troco = troco % 50;

    int nota20 = troco / 20;
    troco = troco % 20;

    int nota10 = troco / 10;
    troco = troco % 10;

    int nota5 = troco / 5;
    troco = troco % 5;

    int nota2 = troco / 2;
    troco = troco % 2;

    int moeda1 = troco;

    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 20: %d\n", nota20);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 2: %d\n", nota2);
    printf("Moedas de 1: %d\n", moeda1);

    return 0;
}