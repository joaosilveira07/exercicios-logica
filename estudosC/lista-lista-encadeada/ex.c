#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int codigo;
    float preco;
    struct No *proxNo;
} No;   

typedef struct Lista{
    int tamanho;
    No *inicio;
} Lista;

No *encontrarMaiorPreco(Lista *lista){
    if (lista -> tamanho == 0){
        printf("A lista esta vazia.");
        return NULL;
    }

    No *atual = lista -> inicio;
    No *maior = atual;

    while (atual != NULL){
        if (atual -> preco > maior -> preco){
            maior = atual;
        }

        atual = atual -> proxNo;
    }

    return maior;
}

