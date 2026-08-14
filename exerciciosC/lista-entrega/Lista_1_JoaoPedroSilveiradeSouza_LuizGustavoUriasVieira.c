// João Pedro Silveira de Souza RA: 26009261
// Luiz Gustavo Urias Vieira RA:
#include <stdio.h>

void exercicio01()
{
    float nota1, nota2;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    float media = ((nota1 * 2) + (nota2 * 3)) / 4;

    printf("Media = %.2f\n", media);
}

void exercicio02()
{
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

void exercicio03()
{
    float peso, novoPeso;

    printf("Digite seu peso atual: \n");
    scanf("%f", &peso);

    novoPeso = peso * 1.15;
    printf("Se engordar 15 porcento, seu peso sera: %.1f\n", novoPeso);

    novoPeso = peso * 1.2;
    printf("Se engordar 20 porcento, seu peso sera: %.1f\n", novoPeso);
}

void exercicio04()
{
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

void exercicio05()
{
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

void exercicio06()
{
    int totalPizzas, fatias, fatiasRestantes, fatiasParaProximaPizza;

    printf("Quantas fatias foram consumidas: \n");
    scanf("%d", &fatias);

    totalPizzas = fatias / 8;
    printf("Foram consumidas %d pizzas.\n", totalPizzas);

    fatiasRestantes = fatias % 8;
    if (fatiasRestantes > 0)
    {
        fatiasParaProximaPizza = 8 - fatiasRestantes;
    }
    else
    {
        fatiasParaProximaPizza = 0;
    }

    printf("Faltaram %d fatias para completar a proxima pizza.\n", fatiasParaProximaPizza);
}

void exercicio07()
{
    float tempC, tempF;

    printf("Digite a temperatura em Fahrenheint: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) / 1.8;
    printf("Temperatura em Graus Celsius: %.1f", tempC);
}

void exercicio08()
{
    float raio, area, comprimento;
    const float pi = 3.14159;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = (raio * raio) * pi;
    comprimento = 2 * pi * raio;

    printf("Area = %.2f\n", area);
    printf("Comprimento = %.2f\n", comprimento);
}

void exercicio09()
{
    float tensao, resistencia, corrente;

    printf("Digite a tensao: ");
    scanf("%f", &tensao);
    printf("Digite a resistencia: ");
    scanf("%f", &resistencia);

    corrente = tensao / resistencia;
    printf("Corrente: %.2f", corrente);
}

void exercicio10()
{
    float c1, c2, hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite o segundo cateto: ");
    scanf("%f", &c2);
    // Não consegui fazer
}

void exercicio11()
{
    float largura, comprimento, area, potencia;

    printf("Digite a largura do comodo (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do comodo (m): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    potencia = area * 18;

    printf("Area: %.2f m2", area);
    printf("Potencia de iluminacao necessaria: %.2f W", potencia);
}

void exercicio12()
{
    float angulo1, angulo2, angulo3;
    float soma = 180.0;

    printf("Digite o primeiro angulo: ");
    scanf("%f", &angulo1);
    printf("Digite o segundo angulo: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("O terceiro angulo e: %.1f\n", angulo3);
}

void exercicio13()
{
    int n, nd;

    printf("Digite o numero de lados: ");
    scanf("%d", &n);

    nd = (n * (n - 3)) / 2;

    printf("Numero de diagonais: %d\n", nd);
}

void exercicio14()
{
    float altura, raio, volume;
    const float pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = pi * (raio * raio) * altura;

    printf("Volume: %.2f", volume);
}

void exercicio15()
{
    int hora, minutos, segundos;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &hora);

    minutos = hora * 60;
    segundos = minutos * 60;

    printf("%d horas, tem %d minutos.\n", hora, minutos);
    printf("%d minutos, tem %d segundos.\n", minutos, segundos);
}

void exercicio16()
{
    int alfa, beta, gama, temp;

    printf("Digite o valor de alfa: ");
    scanf("%d", &alfa);
    printf("Digitei o valor de beta: ");
    scanf("%d", &beta);
    printf("Digite o valor de gama: ");
    scanf("%d", &gama);

    printf("Alfa: %d, Beta: %d, Gama: %d", alfa, beta, gama);
    temp = alfa;
    alfa = beta;
    beta = gama;
    gama = temp;
    printf("Alfa: %d, Beta: %d, Gama: %d", alfa, beta, gama);
}

void exercicio17()
{
    float n1, n2, n3, n4, media;

    printf("Digite nota 1: ");
    scanf("%f", &n1);
    printf("Digite nota 2: ");
    scanf("%f", &n2);
    printf("Digite nota 3: ");
    scanf("%f", &n3);
    printf("Digite nota 4: ");
    scanf("%f", &n4);

    media = ((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4)) / 8;
    printf("Media ponderada: %.2f", media);
}

void exercicio18()
{
    float tempo, velocidade, distancia, litros_usados;

    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros_usados = distancia / 12.0;

    printf("Distancia percorrida: %.2f km", distancia);
    printf("Combustivel consumido: %.2f litros", litros_usados);
}

void exercicio19()
{
    float salario, conta1, conta2, restante;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    restante = salario - (conta1 * 1.02) - (conta2 * 1.02);

    printf("Salario restante: R$ %.2f", restante);
}

void exercicio20()
{
    float r1, r2, rs, rp;

    printf("Digite o valor do primeiro resistor (R1): ");
    scanf("%f", &r1);

    printf("Digite o valor do segundo resistor (R2): ");
    scanf("%f", &r2);

    rs = r1 + r2;
    rp = (r1 * r2) / (r1 + r2);

    printf("Resistencia em serie: %.2f ohms", rs);
    printf("Resistencia em paralelo: %.2f ohms", rp);
}

int main()
{
    int op;

    do
    {
        printf("\nLista 01\n");
        printf("\nDigite 0 se quiser encerrar...");
        printf("\nEscolha o número do exercício: ");
        scanf("%d", &op);

        switch (op)
        {
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