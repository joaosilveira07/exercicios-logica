#include <stdio.h>

int main(){
    int tempoTotal;
    int horas, minutos;

    printf("Digite o tempo estacionado em minutos: ");
    scanf("%d", tempoTotal);

    horas = tempoTotal / 60;
    tempoTotal = tempoTotal % 60;

    minutos = tempoTotal / 1;
    tempoTotal = tempoTotal % 1;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
}