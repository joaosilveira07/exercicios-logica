#include <stdio.h>

// EXERCICIO 1
// int main(){
//     float n1, n2, media;

//     printf("Digite a primeira nota: ");
//     scanf("%f", &n1);
//     printf("Digite a segunda nota: ");
//     scanf("%f", &n2);

//     media = ((n1 * 2) + (n2 * 3)) / 4;
//     printf("Media = %.2f", media);
// }

// EXERCICIO 2
// int main() {
//     float salarioFixo, totalVendas, comissao, salarioFinal;

//     printf("Digite o salario fixo: ");
//     scanf("%f", &salarioFixo);

//     printf("Digite o valor total das vendas: R$ ");
//     scanf("%f", &totalVendas);

//     comissao = totalVendas * 0.04;
//     salarioFinal = salarioFixo + comissao;

//     printf("\nComissao: R$ %.2f", comissao);
//     printf("\nSalario Final: R$ %.2f\n", salarioFinal);

//     return 0;
// }

// EXERCICIO 3
// int main(){
//     float peso, novoPeso;

//     printf("Digite seu peso: ");
//     scanf("%f", &peso);

//     novoPeso += peso * 1.15;
//     printf("Seu peso se vc engordar 15 porcento = %.2f %n", novoPeso);

//     novoPeso += peso * 1.20;
//     printf("Seu peso se vc engordar 20 porcento = %.2f %n", novoPeso);

// }

// EXERCICIO 4
// int main(){
//     float baseMaior, baseMenor, altura, area;

//     printf("Digite a base maior: ");
//     scanf("%f", &baseMaior);
//     printf("Digite a base menor: ");
//     scanf("%f", &baseMenor);
//     printf("Agora digite a altura: ");
//     scanf("%f", &altura);

//     area = ((baseMaior + baseMenor) * altura) / 2;

//     printf("Area = %.2f", area);
// }

// EXERCICIO 5
// int main(){
//     int anoNasc, anoAtual, idade;

//     printf("Digite o ano em que voce nasceu: ");
//     scanf("%d", &anoNasc);
//     printf("Digite o ano atual: ");
//     scanf("%d", &anoAtual);

//     idade = anoAtual - anoNasc;
//     printf("Voce tem %d anos.", idade);

//     idade = idade * 12;
//     printf("Voce tem %d meses.", idade);

//     idade = idade * 30;
//     printf("Voce tem %d dias.", idade);

//     idade = idade / 4;
//     printf("Voce tem %d semanas.", idade);
// }

// EXERCICIO 6
int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int somaPares = 0, somaImpares = 0, intervalo30e90 = 0;

    printf("Digite o numero: ");
    scanf("%d", &n1);
    printf("Digite o numero: ");
    scanf("%d", &n2);
    printf("Digite o numero: ");
    scanf("%d", &n3);
    printf("Digite o numero: ");
    scanf("%d", &n4);
    printf("Digite o numero: ");
    scanf("%d", &n5);
    printf("Digite o numero: ");
    scanf("%d", &n6);
    printf("Digite o numero: ");
    scanf("%d", &n7);
    printf("Digite o numero: ");
    scanf("%d", &n8);
    printf("Digite o numero: ");
    scanf("%d", &n9);
    printf("Digite o numero: ");
    scanf("%d", &n10);

    if (n1 % 2 == 0){
        somaPares += n1;
    } else{
        somaImpares += n1;
    }
    
    if (n2 % 2 == 0){
        somaPares += n2;
    } else{
        somaImpares += n2;
    }
    
    if (n3 % 2 == 0){
        somaPares += n3;
    } else{
        somaImpares += n3;
    }
    
    if (n4 % 2 == 0){
        somaPares += n4;
    } else{
        somaImpares += n4;
    }
    
    if (n5 % 2 == 0){
        somaPares += n5;
    } else{
        somaImpares += n5;
    }
    
    if (n6 % 2 == 0){
        somaPares += n6;
    } else{
        somaImpares += n6;
    }
    
    if (n7 % 2 == 0){
        somaPares += n7;
    } else{
        somaImpares += n7;
    }
    
    if (n8 % 2 == 0){
        somaPares += n8;
    } else{
        somaImpares += n8;
    }

    if (n9 % 2 == 0){
        somaPares += n9;
    } else{
        somaImpares += n9;
    }

    if (n10 % 2 == 0){
        somaPares += n10;
    } else{
        somaImpares += n10;
    }
}
