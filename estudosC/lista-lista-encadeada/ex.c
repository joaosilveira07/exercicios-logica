#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// typedef struct No {
//     int codigo;
//     float preco;
//     struct No *proxNo;
// } No;   

// typedef struct Lista{
//     int tamanho;
//     No *inicio;
// } Lista;

// // EX 1
// No *encontrarMaiorPreco(Lista *lista){
//     if (lista -> tamanho == 0){
//         printf("A lista esta vazia.");
//         return NULL;
//     }

//     No *atual = lista -> inicio;
//     No *maior = atual;

//     while (atual != NULL){
//         if (atual -> preco > maior -> preco){
//             maior = atual;
//         }

//         atual = atual -> proxNo;
//     }

//     return maior;
// }

// // EX 2
// int contarAcimaDoPreco(const Lista *lista, float limite){
//     if (lista -> tamanho == 0){
//         printf("A lista esta vazia.");
//         return 0;
//     }
//     No *atual = lista -> inicio;
//     int contador = 0;

//     while (atual){
//         if (atual -> preco > limite){
//             contador++;
//         }

//         atual = atual -> proxNo;
//     }

//     return contador;
// }

// // EX 3
// void removerDuplicadosPorCodigo(Lista *lista){
//     if (lista -> tamanho == 0){
//         printf("A lista esta vazia");
//         return;
//     }

//     No *atual = lista -> inicio;
    
//     while (atual != NULL){
//         No *anterior = atual;
//         No *aux = atual -> proxNo;

//         while (aux != NULL){
//             if (aux -> codigo == atual -> codigo){
//                 anterior -> proxNo = aux -> proxNo;
//                 free(aux);
//                 lista -> tamanho--;
//                 aux = anterior -> proxNo;
//             } else {
//                 anterior = aux;
//                 aux = aux -> proxNo;
//             }
//         }

//         atual = atual -> proxNo;
//     }
// }

// // EX 4
// void inserirInicio(Lista *lista, int codigo, float preco){
//     No *novoNo = malloc(sizeof(No));
//     novoNo -> codigo = codigo;
//     novoNo -> preco = preco;

//     if (novoNo){
//         if (lista -> tamanho == 0){
//             lista -> inicio = novoNo;
//             novoNo -> proxNo = NULL;
//             lista -> tamanho++;
//         } else {
//             novoNo -> proxNo = lista -> inicio;
//             lista -> inicio = novoNo;
//             lista -> tamanho++;
//         }
//     }
// }


// // EX 5
// void removerAcimaDoPreco(Lista *lista, float limite) {
//     No *anterior = NULL;
//     No *atual = lista->inicio;

//     while (atual != NULL) {
//         if (atual->preco > limite) {
//             No *proximo = atual->proxNo;

//             if (anterior == NULL) {
//                 lista->inicio = proximo;
//             } else {
//                 anterior->proxNo = proximo;
//             }

//             free(atual);
//             atual = proximo;
//             lista->tamanho--;
//         } else {
//             anterior = atual;
//             atual = atual->proxNo;
//         }
//     }
// }

// EX GERADOS POR IA
typedef struct No{
    int codigo;
    float preco;
    struct No *proxNo;
} No;

typedef struct Lista {
    int tamanho;
    No *inicio;
} Lista;

// EX 1
No *encontrarMenorPreco(const Lista *lista){
    if (lista -> tamanho == 0){
        return NULL;
    }
    No *atual = lista -> inicio;
    No *menorPreco = atual;

    while (atual){
        if (atual -> preco < menorPreco -> preco){
            menorPreco = atual;
        }
        atual = atual -> proxNo;
    }

    return menorPreco;
}

// EX 2
int contarNaFaixaDePreco(const Lista *lista, float min, float max){
    if (lista -> tamanho == 0){
        return NULL;
    }

    No *atual = lista -> inicio;
    int cont = 0;

    while (atual){
        if (atual -> preco >= min && atual -> preco < max){
            cont++;
        }
        atual = atual -> proxNo;
    }

    return cont;
}

// EX 3
void removerDuplicadosPorCodigo(Lista *lista){
    if (lista -> tamanho == 0){
        return;
    }

    No *atual = lista -> inicio;
    
    while (atual){
        No *aux = atual -> proxNo;
        No *anterior = atual;
        
        while (aux){
            if (aux -> codigo == atual -> codigo){
                anterior -> proxNo = aux -> proxNo;
                free(aux);
                aux = anterior -> proxNo;
                lista -> tamanho--; 
            } else {
                anterior = aux;
                aux = aux -> proxNo;
            }
        }
        atual = atual -> proxNo;
    }
}

