// João Pedro Silveira de Souza RA:
// Luiz Gustavo Urias Vieira RA: 
#include <stdio.h>

int main(){
    int op;

    do {
        printf("\nLista 01\n");
        printf("\nEscolha o número do exercício: ");
        scanf("%d", &op);

        switch (op) {
            case 1: exercicio01(); break;

        }
    } while (op != 0);

    return 0;
}

void exercicio01(){
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    float media = ((nota1 * 2) + (nota2 * 3)) / 4;

    printf("Media = %.2f", media);
}