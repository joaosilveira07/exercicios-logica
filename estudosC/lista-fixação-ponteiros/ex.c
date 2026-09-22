#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// EX 1
// int main(){
//     int moedas = 18, *pMoedas = &moedas;

//     printf("Valor de moedas: %d\n", moedas);
//     printf("Endereco de moedas: %p\n", &moedas);
//     printf("Valor do ponteiro: %p\n", pMoedas);
//     printf("Conteudo do ponteiro: %d\n", *pMoedas);

//     *pMoedas = 30;

//     printf("Valor de moedas: %d\n", moedas);
//     printf("Endereco de moedas: %p\n", &moedas);
//     printf("Valor do ponteiro: %p\n", pMoedas);
//     printf("Conteudo do ponteiro: %d\n", *pMoedas);
// }

// EX 2
// int main(){
//     float temp = 36.8;
//     float *pTemp = &temp;

//     printf("Temperatura original: %.1f\n", *pTemp);
//     *pTemp += 2.0;
//     printf("Temperatura depois da soma: %.1f\n", *pTemp);
// }

// EX 3
// int main(){
//     char categoria = 'C';
//     char *pCat = &categoria;

//     printf("letra variavel: %c\n", categoria);
//     printf("endereco de categoria: %p\n", &categoria);
//     printf("Conteudo acessado pelo ponteiro: %c\n", *pCat);
//     *pCat = 'A';
//     printf("\nletra variavel: %c\n", categoria);
//     printf("endereco de categoria: %p\n", &categoria);
//     printf("Conteudo acessado pelo ponteiro: %c\n", *pCat);
// }

// EX 4
// int main(){
//     int vidas = 3, *pVidas = &vidas;
//     float moedas = 9.5, *pMoedas = &moedas;
//     char nivel = 'B', *pNivel = &nivel;

//     printf("Vida original: %d\n", vidas);
//     printf("Moedas originais: %.1f\n", moedas);
//     printf("Nivel original: %c\n", nivel);
//     *pVidas = 5;
//     *pMoedas = 15.0;
//     *pNivel = 'A';
//     printf("\nVida dps de modificado: %d\n", *pVidas);
//     printf("Moedas dps de modificado: %.1f\n", *pMoedas);
//     printf("Nivel dps de modificado: %c\n", *pNivel);
// }

// EX 5
// int main(){
//     int leitura1 = 10, leitura2 = 25, *pL1 = &leitura1;

//     printf("Conteudo acessado pelo ponteiro apontando para leitura1: %d\n", *pL1);

//     pL1 = &leitura2;

//     printf("Conteudo acessado pelo ponteiro apontando para leitura2: %d\n", *pL1);
//     *pL1 = 40;
//     printf("Conteudo acessado pelo ponteiro apontando para leitura2 modificado: %d\n", *pL1);

//     pL1 = &leitura1;
//     printf("Conteudo acessado pelo ponteiro apontando para leitura1 novamente: %d\n", *pL1);
// }

// EX 6
// int main() {
//     int numero = 7;
//     int *p;
    
//     *p = &numero;

//     printf("%d\n", *p);

//     return 0;
// } R: a linha 3 está incorreta, pois ela inicializa um ponteiro sem definir para onde ele aponta ou como NULL, o que pode resultar em erro. O correto seria int *p = NULL;
// a linha 5 também está incorreta, pois ela está tentando associar um endereço de memória ao conteudo do ponteiro, o que resulta em erro.

// EX 7
// int main() {
//     float nota = 8.0;
//     float *ptr = &nota;

//     printf("Nota: %.1f\n", &nota);
//     printf("Conteudo: %.1f\n", ptr);

//     return 0;
// } R: o primeiro print está errado pois no código está &nota, isso pega o endereço de nota e não o valor dela. O segundo print está errado, pois no printf está %f e a variável que ele 
// colocou foi um ponteiro, o valor do ponteiro é um endereço de memória, para acessar o conteúdo deste endereço de memória, é preciso colocar o * antes do ponteiro.
// 1 print: printf("Nota: %.1f\n", nota); 2 print: printf("Conteudo: %.1f\n", *prt);
