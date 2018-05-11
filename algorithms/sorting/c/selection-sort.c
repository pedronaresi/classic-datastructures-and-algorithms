//
//  main.c
//  selectionSort
//
//  Created by Pedro Manhez Naresi on 8/10/17.
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

void selectionSort(int vetor[], int tamanho){
    int menor;
    for(int i = 0; i < tamanho; i++){
        menor = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        swap(menor, i, vetor);
        printArray(vetor, tamanho);
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
    selectionSort(vet, x);
}
