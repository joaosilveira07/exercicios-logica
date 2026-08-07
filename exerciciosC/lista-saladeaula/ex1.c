#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float produto = num1 * num2;

    printf("A soma entre os números é: %.2f\nO produto entre os números é: %.2f", soma, produto);

    return 0;
}