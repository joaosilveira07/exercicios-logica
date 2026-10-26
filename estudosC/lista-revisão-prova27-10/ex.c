#include <stdio.h>
#include <stdlib.h>

typedef struct NoLista{
    int valor;
    struct NoLista *proxNo;
} NoLista;

typedef struct Lista{
    NoLista *inicio;
    int tamanho;
} Lista;

Lista *criarLista();
void inserirInicio(Lista* lista, int valor);
void inserirFim(Lista* lista, int valor);
void remover(Lista* lista, int valor);

typedef struct NoPilha {
    int valor;
    struct NoPilha* prox;
} NoPilha;

typedef struct Pilha {
    NoPilha* topo;
    int tamanho;
} Pilha;

void empilhar(Pilha* pilha, int valor);
int desempilhar(Pilha* pilha);
int pilhaVazia(const Pilha* pilha);

// EX 1
int contarPares(Pilha *pilha){
    if (pilhaVazia){
        return NULL;
    }

    NoPilha *atual = pilha->topo;
    int qtdPares = 0;

    while (atual){
        if (atual -> valor % 2 == 0){
            qtdPares++;
        }
        
        atual = atual ->prox;
    }

    return qtdPares;
}

// EX 3
typedef struct NoBanda {
    char nomeBanda[80];
    char estiloMusical[30];
    struct NoBanda* prox;
} NoBanda;

typedef struct Lista {
    NoBanda* inicio;
    int tamanho;
} Lista;

NoBanda* criarNo(char nomeBanda[], char estiloMusical[]);

void inserirAposPrimeiroEstilo(Lista *lista, char nomeBanda[], char estiloMusical[]){
    NoBanda *atual = lista ->inicio;
    NoBanda *novaBanda = criarNo(nomeBanda, estiloMusical);

    while (atual){
        if(atual -> estiloMusical == novaBanda -> estiloMusical){
            NoBanda *aux = atual -> prox;
            novaBanda -> prox = aux;
            atual -> prox = nomeBanda;
            return;
        }

        atual = atual -> prox;
    }
}

