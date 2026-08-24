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