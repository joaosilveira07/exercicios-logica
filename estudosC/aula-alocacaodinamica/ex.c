#include <stdio.h>
#include <stdlib.h>

// int *criarVetorDinamico(int tamanho){
//     int *vetor = malloc(tamanho * sizeof(int));
    
//     if (vetor == NULL){
//         printf("Erro: Não foi possível alocar memória.\n");
//         return NULL;
//     }

//     return vetor;
// }

// void imprimir_preco(int tamanho, int *ptrVetor){
//     for (int i = 0; i < tamanho; i++){
//         printf("Item %d\n", i + 1);
//         printf("Preco: %d\n", ptrVetor[i]);
//     }
// }

// void aplicar_reajuste(int *ptrVetor, int tamanho, int porcentagem){
//     for (int i = 0; i < tamanho; i++){
//         ptrVetor[i] *= 1 + (porcentagem / 100.0); 
//     }
// }

// void desalocar(int **ptrVetor){
//     free(*ptrVetor);
//     *ptrVetor = NULL;
// }

// int main(){
//     int vetorEstatico[5] = {10, 20, 30, 40, 50};
//     int *ptrVetorDinamico = criarVetorDinamico(5);
    
    
//     for (int i = 0; i < 5; i++){
//         ptrVetorDinamico[i] = (i + 1) * 10;
//     }

//     imprimir_preco(5, ptrVetorDinamico);
//     aplicar_reajuste(ptrVetorDinamico, 5, 10);
//     imprimir_preco(5, ptrVetorDinamico);
//     desalocar(&ptrVetorDinamico);
//     printf("endereco depois do free: %p\n", ptrVetorDinamico);
// }

// EX GERADOS POR IA PARA FIXAR

// EX 1
// int *criarVetorAlunos(int qtdAlunos){
//     int *vetor = malloc(qtdAlunos * sizeof(int));
//     if (vetor == NULL){
//         return NULL;
//     }

//     return vetor;
// }

// void preencherNotas(int *ptrVetor, int qtdAlunos){
//     int vetorNotas[] = {6, 7, 8, 5, 9};
//     for (int i = 0; i < qtdAlunos; i++){
//         ptrVetor[i] = vetorNotas[i];
//     }
// }

// void imprimirNotas(int *ptrVetor, int qtdAlunos){
//     for (int i = 0; i < qtdAlunos; i++){
//         printf("Aluno: %d\n", i + 1);
//         printf("Nota: %d\n", ptrVetor[i]);
//     }
// }

// void aplicarBonus(int *ptrVetor, int qtdAlunos, int valorBonus){
//     for (int i = 0; i < qtdAlunos; i++){
//         ptrVetor[i] += valorBonus;
//         if (ptrVetor[i] > 10){
//             ptrVetor[i] = 10;
//         }
//     }
// }

// void desalocar(int **ptrVetor){
//     free(*ptrVetor);
//     *ptrVetor = NULL;
// }

// int main(){
//     int *vetorAlunos = criarVetorAlunos(5);
//     if (vetorAlunos == NULL){
//         return -1;
//     } 

//     preencherNotas(vetorAlunos, 5);
//     imprimirNotas(vetorAlunos, 5);
//     aplicarBonus(vetorAlunos, 5, 1);
//     imprimirNotas(vetorAlunos, 5);
//     desalocar(&vetorAlunos);
//     printf("endereco depois do free: %p\n", vetorAlunos);
// }

// EX 2
int *criarVetorDinamico(int qtdProdutos){
    int *vetor = malloc(qtdProdutos * sizeof(int));
    if (vetor == NULL){
        return NULL;
    }

    return vetor;
}

void preencherEstoque(int *ptrVetor, int qtdProdutos){
    int v[] = {15, 30, 12, 50, 20};
    for (int i = 0; i < qtdProdutos; i++){
        ptrVetor[i] = v[i];
    }
}

void imprimirEstoque(int *ptrVetor, int qtdProdutos){
    for (int i = 0; i < qtdProdutos; i++){
        printf("Numero produto: %d\n", i + 1);
        printf("Quantidade disponivel: %d\n", ptrVetor[i]);
    }
}

void aplicarReposicao(int *ptrVetor, int qtdProdutos, int qtdUnidadesRecebidas){
    for (int i = 0; i < qtdProdutos; i++){
        ptrVetor[i] += qtdUnidadesRecebidas;
    }
}

void desalocar(int **ptrVetor){
    free(*ptrVetor);
    *ptrVetor = NULL;
}

int main(){
    int *vetor = criarVetorDinamico(5);
    if (vetor == NULL){
        return -1;
    }

    preencherEstoque(vetor, 5);
    imprimirEstoque(vetor, 5);
    aplicarReposicao(vetor, 5, 5);
    imprimirEstoque(vetor, 5);
    desalocar(&vetor);
}