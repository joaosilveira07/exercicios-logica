#include <stdio.h>
#include <stdlib.h>

int *criarVetorDinamico(int tamanho){
    int *vetor = malloc(tamanho * sizeof(int));;
    
    if (criarVetorDinamico == NULL){
        printf("Erro: Não foi possível alocar memória.\n");
        return NULL;
    }

    return vetor;
}

void imprimir_preco(int tamanho, int *ptrVetor){
    for (int i = 0; i < tamanho; i++){
        printf("Item %d\n", i + 1);
        printf("Preco: %d\n", ptrVetor[i]);
    }
}

void aplicar_reajuste(int *ptrVetor, int tamanho, int porcentagem){
    for (int i = 0; i < tamanho; i++){
        ptrVetor[i] *= 1 + (porcentagem / 100.0); 
    }
}

void desalocar(int **ptrVetor){
    free(*ptrVetor);
    *ptrVetor = NULL;
}

int main(){
    int vetorEstatico[5] = {10, 20, 30, 40, 50};
    int *ptrVetorDinamico = criarVetorDinamico(5);
    
    
    for (int i = 0; i < 5; i++){
        ptrVetorDinamico[i] = (i + 1) * 10;
    }

    imprimir_preco(5, ptrVetorDinamico);
    aplicar_reajuste(ptrVetorDinamico, 5, 10);
    imprimir_preco(5, ptrVetorDinamico);
    desalocar(&ptrVetorDinamico);
    printf("endereco depois do free: %p\n", ptrVetorDinamico);
}