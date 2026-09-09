#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// EX 1
int main(){
    typedef struct {
        char nome[30];
        int idade;
    } Pessoa;

    Pessoa p = {"Marina", 21};
    printf("%s tem %d anos.\n", p.nome, p.idade);
}