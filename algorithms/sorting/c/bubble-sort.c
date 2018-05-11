//
//  main.c
//  bubbleSort
//
//  Created by Pedro Manhez Naresi on 8/11/17.
//  Copyright © 2017 Pedro Manhez Naresi. All rights reserved.
//

#include <stdio.h>

void printArray(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void swap(int menor, int i, int vetor[]){
    int aux;
    aux = vetor[menor];
    vetor[menor] = vetor[i];
    vetor[i] = aux;
}

void bubbleSort(int vetor[], int tamanho){
    for(int i = 0; i < tamanho-1; i++){
        for(int j = 0; j < (tamanho - i - 1); j++){
            if(vetor[j] > vetor[j+1]){
                swap((j+1), j, vetor);
                printArray(vetor, tamanho);
            }
        }
    }
    printArray(vetor, tamanho);
}

int main(void) {
    int x;
    scanf("%d", &x);
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d", &vet[i]);
    }
    bubbleSort(vet, x);
}
