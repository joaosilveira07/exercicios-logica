#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valorNo;
    struct No *proxNo;
} No;

typedef struct {
    No *inicio;
    int tamanho;
} Lista;

Lista *criarLista(){
    Lista *lista = malloc(sizeof(lista));

    if (lista){
        lista -> inicio = NULL;
        lista -> tamanho = 0;
    }
    
    return lista;
}

No *inserirNoInicio(Lista *lista, int valor){
    No *novoNo = malloc(sizeof(No));

    if (novoNo){
        novoNo -> valorNo = valor;
        novoNo -> proxNo = lista -> inicio;
        lista -> inicio = novoNo;
        lista -> tamanho++;
    }
}

void imprimir(const Lista *lista){
    int i = 0;
    No *temp = lista -> inicio;
    while (temp != NULL){
        printf("No: %d\n", i + 1);
        printf("Valor No: %d\n", temp -> valorNo);
        i++;
        temp = temp -> proxNo;
    }
    printf("NULL");
}

No *inserirNoFim(Lista *lista, int valor){
    No *novoNo = malloc(sizeof(No));

    if (!novoNo){
        printf("Erro ao alocar memória para o novo nó.");
        return;
    }

    novoNo -> valorNo = valor;
    novoNo -> proxNo = NULL;
    
    if (lista -> tamanho == 0){
        lista -> inicio = novoNo;
    } else {
        No *atual = lista -> inicio;
        while (atual -> proxNo != NULL){
            atual = atual -> proxNo;
        }

        atual -> proxNo = novoNo;
    }

    lista -> tamanho++;
}

No *buscarValor(Lista *lista, int valor){
    No *atual = lista -> inicio;

    while (atual -> proxNo != NULL){
        if (atual -> valorNo == valor){
            return atual;
        }
        atual = atual -> proxNo;
    }

    return NULL;
}

void remover(Lista *lista, int valor){
    if (lista -> tamanho == 0){
        printf("A lista está vazia.");
        return;
    }
    
    No *atual = lista -> inicio;
    No *anterior = NULL;

    while (atual){
        if (atual -> valorNo == valor){
            if (anterior == NULL){
                lista -> inicio = atual -> proxNo;
            } else {
                anterior ->proxNo = atual ->proxNo;
            }
            free (atual);
            lista -> tamanho--;
            printf("valor removido da lista");
            return;
        }
        anterior = atual;
        atual = atual -> proxNo;
    }
}

void liberar(Lista **ptrLista){
    No *atual = (*ptrLista) -> inicio;
    while (atual){
        No *aux = atual;
        atual = atual -> proxNo;
        free (aux);
    }
    free(*ptrLista);
    (*ptrLista) = NULL;
} // SEMPRE GUARDE O NÓ QUE SERÁ REMOVIDO ANTES DE AVANÇAR O PONTEIRO
