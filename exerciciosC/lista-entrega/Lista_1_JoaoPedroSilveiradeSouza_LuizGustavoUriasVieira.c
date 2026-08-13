// João Pedro Silveira de Souza RA: 26009261
// Luiz Gustavo Urias Vieira RA: 
#include <stdio.h>

void exercicio01(){
    float nota1, nota2;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    
    float media = ((nota1 * 2) + (nota2 * 3)) / 4;

    printf("Media = %.2f\n", media);
}

void exercicio02(){
    float salarioFixo, totalVendas, comissao, salarioFinal;

    printf("Digite o salario fixo: \n");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas: R$ \n");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("Comissao: R$ %.2f\n", comissao);
    printf("Salario Final: R$ %.2f\n", salarioFinal);
}

void exercicio03(){
    float peso, novoPeso;

    printf("Digite seu peso atual: \n");
    scanf("%f", &peso);

    novoPeso = peso * 1.15;
    printf("Se engordar 15 porcento, seu peso sera: %.1f\n", novoPeso);

    novoPeso = peso * 1.2;
    printf("Se engordar 20 porcento, seu peso sera: %.1f\n", novoPeso);
}

void exercicio04(){
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: \n");
    scanf("%f", &baseMaior);
    printf("Digite a base menor: \n");
    scanf("%f", &baseMenor);
    printf("Agora digite a altura: \n");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area = %.2f", area);
}

void exercicio05(){
    int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("Digite o ano em que voce nasceu: \n");
    scanf("%d", &anoNasc);
    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNasc;
    printf("Voce tem %d anos.\n", idadeAnos);

    idadeMeses = idadeAnos * 12;
    printf("Voce tem %d meses.\n", idadeMeses);

    idadeDias = idadeMeses * 30;
    printf("Voce tem %d dias.\n", idadeDias);

    idadeSemanas = idadeDias / 7;
    printf("Voce tem %d semanas.\n", idadeSemanas);
}

void exercicio06(){
    int totalPizzas, fatias, fatiasRestantes, fatiasParaProximaPizza;

    printf("Quantas fatias foram consumidas: \n");
    scanf("%d", &fatias);

    totalPizzas = fatias / 8;
    printf("Foram consumidas %d pizzas.\n", totalPizzas);

    fatiasRestantes = fatias % 8;
    if (fatiasRestantes > 0){
        fatiasParaProximaPizza = 8 - fatiasRestantes;
    }
    else{
        fatiasParaProximaPizza = 0;
    }

    printf("Faltaram %d fatias para completar a proxima pizza.\n", fatiasParaProximaPizza);
}

void exercicio07(){
    float tempC, tempF;

    printf("Digite a temperatura em Fahrenheint: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) / 1.8;
    printf("Temperatura em Graus Celsius: %.1f", tempC);
}

void exercicio08(){
    
}

int main(){
    int op;

    do {
        printf("\nLista 01\n");
        printf("\nDigite 0 se quiser encerrar...");
        printf("\nEscolha o número do exercício: ");
        scanf("%d", &op);

        switch (op) {
            case 0:
                printf("Saindo do programa...\n");
                break;
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
            case 9:
                exercicio09();
                break;
            case 10:
                exercicio10();
                break;
            case 11:
                exercicio11();
                break;
            case 12:
                exercicio12();
                break;
            case 13:
                exercicio13();
                break;
            case 14:
                exercicio14();
                break;
            case 15:
                exercicio15();
                break;
            case 16:
                exercicio16();
                break;
            case 17:
                exercicio17();
                break;
            case 18:
                exercicio18();
                break;
            case 19:
                exercicio19();
                break;
            case 20:
                exercicio20();
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (op != 0);

    return 0;
}