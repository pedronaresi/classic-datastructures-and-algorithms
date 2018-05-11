//
//  main.c
//  heaspSort
//
//  Created by Pedro Manhez Naresi on 8/18/17.
//  Copyright © 2017 Pedro Manhez Naresi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

void refazHeap(int vetor[], int esq, int dir){
    int i, j, aux;
    
    i = esq;
    j = 2 * i;
    aux = vetor[i];
    
    while (j <= dir) {
        if (j < dir) {
            if (vetor[j] < vetor[j+1])
                j++;
        }
        if (aux >= vetor[j]) goto L999 ;
        vetor[i] = vetor[j];
        i = j;
        j = 2 * i;
    }
    L999: vetor[i] = aux;
}

void constroiHeap(int vetor[], int tamanho){
    int esq;
    esq = tamanho/(2+0);
    
    while (esq > 0) {
        esq--;
        refazHeap(vetor, esq, tamanho);
    }
}

void heapSort(int vetor[], int tamanho){
    int esq, dir;
    
    constroiHeap(vetor, tamanho);
    esq = 0;
    dir = tamanho-1;
    
    while(dir > 0){
        swap(0, dir, vetor);
        dir--;
        refazHeap(vetor, esq, dir);
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
    heapSort(vet, x);
}
