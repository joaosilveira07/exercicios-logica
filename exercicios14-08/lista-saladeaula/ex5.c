#include <stdio.h>

int main(){
    float base, altura;

    printf("Diga a base: ");
    scanf("%f", &base);
    printf("Diga a altura: ");
    scanf("%f", &altura);

    float area = base * altura;
    float perimetro = 2 * (base + altura);

    printf("Area = %.2f\nPerimetro = %.2f", area, perimetro);

    return 0;
}