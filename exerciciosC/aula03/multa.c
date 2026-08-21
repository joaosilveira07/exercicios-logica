#include <stdio.h>

int main(){
    int velocidade;
    printf("Digite a velocidade do veiculo (km/gh): ");
    scanf("%d", &velocidade);

    if (velocidade > 80){
        int multa = 360;
        printf("Sua multa é %d \n", multa);
    }
    else if (velocidade > 60){
        int multa = 180;
        printf("Sua multá é %d \n", multa);
    }
    else{
        printf("Não há multa! \n");
    }
    return 0;
}