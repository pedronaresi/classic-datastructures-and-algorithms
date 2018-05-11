//
//  main.c
//  shellSort
//
//  Created by Pedro Manhez Naresi on 8/22/17.
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

void shellSort(int vetor[], int tamanho){
    int i, j, aux, gap;
    gap = 1;
    for(gap = 1; gap < tamanho; gap = 3*gap+1);
    while (gap > 0) {
        gap = (gap-1)/3;
        for (i = gap; i < tamanho; i++) {
            aux = vetor[i];
            j = i;
            while(vetor[j - gap] > aux) {
                vetor[j] = vetor[j - gap];
                j -= gap;
                if(j < gap) break;
            }
            vetor[j] = aux;
            printArray(vetor, tamanho);
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
    shellSort(vet, x);
}
