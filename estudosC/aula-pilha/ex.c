#include <stdio.h>
#include <stdlib.h>

typedef struct NoPilha {
    int valor;
    struct NoPilha *proxNo;
} NoPilha;

typedef struct Pilha{
    NoPilha *topo;
    int tamanho;
} Pilha;



Pilha *criarPilha(){
    Pilha *novaPilha = malloc(sizeof(Pilha));
    novaPilha -> tamanho = 0;
    novaPilha -> topo = NULL;

    return novaPilha;
}

NoPilha *criarNo(int valor){
    NoPilha *novoNo = malloc(sizeof(NoPilha));
    novoNo->valor = valor;
    novoNo->proxNo = NULL;
}

void empilhar(Pilha *pilha, int valor){
    NoPilha *novoNo = criarNo(valor);
    novoNo->proxNo = pilha->topo;

    pilha->topo = novoNo;
    pilha->tamanho++;
}

NoPilha *desempilhar(Pilha *pilha, int *valorDesempilhado){
    if (pilhaVazia(pilha)){
        printf("Pilha vazia.");
        return;
    }
    NoPilha *temp = pilha->topo;
    *valorDesempilhado = temp->valor;
    pilha->topo = temp->proxNo;
    free(temp);
    pilha->tamanho--;
}

void atualizarTopo(Pilha *pilha, int valor){
    if (pilhaVazia(pilha)){
        return;
    }

    pilha->topo->valor = valor;
}

int pilhaVazia(const Pilha *pilha){
    if (pilha->tamanho == 0){
        return 1;
    } else {
        return 0;
    }
}

int topoPilha(const Pilha *pilha){
    if (pilhaVazia(pilha)){
        return -1;
    }

    return pilha->topo->valor;
}

void imprimirPilha(const Pilha *pilha){
    NoPilha *atual = pilha->topo;
    while (atual){
        printf("%d\n", atual->valor);
        atual = atual -> proxNo;
    }
}