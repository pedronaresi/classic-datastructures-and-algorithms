//
//  main.c
//  insertionSort
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

void insertionSort(int vetor[], int tamanho){
    for(int i = 1; i < tamanho; i++){
        int aux = vetor[i];
        int j = i - 1;
        while(j >= 0 && vetor[j] > aux){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
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
    insertionSort(vet, x);
}
