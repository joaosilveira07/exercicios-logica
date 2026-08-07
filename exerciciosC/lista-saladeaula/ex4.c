#include <stdio.h>

int main(){
    float celsius, fahrenheint;

    printf("Diga a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheint = (celsius * 9/5) + 32;

    printf("Temperatura em Celsius = %.2f\nTemperatura em Fahrenheint = %.2f", celsius, fahrenheint);

    return 0;
}