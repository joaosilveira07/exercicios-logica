#include <stdio.h>
#include <stdlib.h>

typedef struct NoPilha {
    int valor;
    struct NoPilha *proxNo;
} NoPilha;

typedef struct Pilha {
    int tamanho;
    NoPilha *topo;
} Pilha;

typedef struct NoLista{
    int valor;
    struct NoLista *proxNo;
} NoLista;

typedef struct NoProduto {
    char nome[50];
    int categoria;
    struct NoProduto *proxNo;
} NoProduto;

typedef struct ListaProduto {
    int tamanho;
    NoProduto *inicio;
} ListaProduto;

typedef struct Lista {
    int tamanho;
    NoLista *inicio;
} Lista;

Pilha *criarPilha(){
    Pilha *novaPilha = malloc(sizeof(Pilha));

    novaPilha -> tamanho = 0;
    novaPilha -> topo = NULL;

    return novaPilha;
}

Lista *criarLista(){
    Lista *novaLista = malloc(sizeof(Lista));

    novaLista -> tamanho = 0;
    novaLista -> inicio = NULL;

    return novaLista;
}

ListaProduto *criarListaProduto(){
    ListaProduto *novaLista = mallco(sizeof(ListaProduto));

    novaLista -> tamanho = 0;
    novaLista -> inicio = NULL;

    return novaLista;
}

NoProduto *criarNoProduto(char nome[], int categoria){
    NoProduto *novoNo = malloc(sizeof(NoProduto));
    if (!novoNo){
        return NULL;
    }

    novoNo -> nome = nome; // método strcpy para copiar uma string para outra
}

NoPilha *criarNoPilha(int valor){
    NoPilha *novoNo = malloc(sizeof(NoPilha));
    if (!novoNo){
        return NULL;
    }

    novoNo -> valor = valor;
    novoNo -> proxNo = NULL;
    return novoNo;
}

NoLista *criarNoLista(int valor){
    NoLista *novoNo = malloc(sizeof(NoLista));
    if (!novoNo){
        return NULL;
    }

    novoNo -> valor = valor;
    novoNo -> proxNo = NULL;
    return novoNo;
}

int pilhaVazia(Pilha *pilha){
    if (pilha -> tamanho == 0){
        return 1;
    }

    return 0;
}

void empilhar(Pilha *pilha, int valor){
    NoPilha *novoNo = criarNoPilha(valor);

    if (novoNo){
        novoNo ->proxNo = pilha -> topo;
        pilha -> topo = novoNo;
        pilha -> tamanho++;
    }
}

void desempilhar(Pilha *pilha){
    if (pilhaVazia(pilha)){
        return;
    }

    NoPilha *temp = pilha -> topo;
    pilha -> topo = temp -> proxNo;
    free(temp);
    pilha -> tamanho--;
}

// EX 1
int contarImpares (Pilha *pilha){
    int impares = 0;
    NoPilha *atual = pilha -> topo;

    while (atual){
        if (atual -> valor % 2 != 0){
            impares++;
        }
        atual = atual -> proxNo;
    }

    return impares;
}

// EX 2


// EX 3
