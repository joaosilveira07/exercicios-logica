#include <stdio.h>

int main(){
    int a, b, c;
    int maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    maior = a;
    menor = a;    

    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);

    return 0;
}