#include <stdio.h>

int main(){
    int p1 = 6;
    int p2 = 4;
    float media = ((p1 * 2) + (p2 * 3)) / 5;

    if (media >= 5){
        printf("Aprovado. Media = %.2f \n", media);
    }
    else {
        printf("Reprovado. Media = %.2f \n", media);
    }

    return 0;
}