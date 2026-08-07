#include <stdio.h>

int main(){
    float distPercorrida, tempoGasto;
    
    
    printf("Qual a distancia percorrida (em km)? ");
    scanf("%f", &distPercorrida);
    printf("Qual o tempo gasto em horas? ");
    scanf("%f", &tempoGasto);
    
    float velocidade = distPercorrida / tempoGasto;
    float velocidadeM = velocidade / 3.6;
    
    
    printf("A velocidade media em km/h = %.1f\nA velocidade media em m/s = %.1f", velocidade, velocidadeM);

    return 0;
}