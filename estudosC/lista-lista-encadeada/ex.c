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

// EX 1
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

// EX 2
int contarAcimaDoPreco(const Lista *lista, float limite){
    if (lista -> tamanho == 0){
        printf("A lista esta vazia.");
        return 0;
    }
    No *atual = lista -> inicio;
    int contador = 0;

    while (atual){
        if (atual -> preco > limite){
            contador++;
        }

        atual = atual -> proxNo;
    }

    return contador;
}

// EX 3
void removerDuplicadosPorCodigo(Lista *lista){
    if (lista -> tamanho == 0){
        printf("A lista esta vazia");
        return;
    }

    No *atual = lista -> inicio;
    
    while (atual != NULL){
        No *anterior = atual;
        No *aux = atual -> proxNo;

        while (aux != NULL){
            if (aux -> codigo == atual -> codigo){
                anterior -> proxNo = aux -> proxNo;
                free(aux);
                lista -> tamanho--;
                aux = anterior -> proxNo;
            } else {
                anterior = aux;
                aux = aux -> proxNo;
            }
        }

        atual = atual -> proxNo;
    }
}

// EX 4
void inserirInicio(Lista *lista, int codigo, float preco){
    No *novoNo = malloc(sizeof(No));
    novoNo -> codigo = codigo;
    novoNo -> preco = preco;

    if (novoNo){
        if (lista -> tamanho == 0){
            lista -> inicio = novoNo;
            novoNo -> proxNo = NULL;
            lista -> tamanho++;
        } else {
            novoNo -> proxNo = lista -> inicio;
            lista -> inicio = novoNo;
            lista -> tamanho++;
        }
    }
}

