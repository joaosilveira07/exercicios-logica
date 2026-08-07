#include <stdio.h>

int main(){
    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota2);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota3);

    float media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;

    printf("A media = %.2f", media);

    return 0;
}