#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 5){
        printf("Aluno aprovado direto.\n");
    }
    else{
        printf("Aluno em recuperacao.\n");

        printf("Digite a nota da recuperacao: \n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Media com rec: %.2f\n", media);

        if(media >= 5){
            printf("Aluno aprovado com recuperacao\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
    }
}