//
//  main.c
//  quickSort
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

void particiona(int esq, int dir, int *i, int *j, int vetor[]){
    int x;
    *i = esq;  *j = dir;
    x = vetor[(*i + *j) / 2]; /* obtem o pivo x */
    do
    {
        while (x > vetor[*i]) (*i)++;
        while (x < vetor[*j]) (*j)--;
        if (*i <= *j) {
            swap(*i, *j, vetor);
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

void ordena(int esq, int dir, int vetor[]){
    int i, j;
    particiona(esq, dir, &i, &j, vetor);
    printArray(vetor, dir);
    if (esq < j)
        ordena(esq, j, vetor);
    if (i < dir)
        ordena(i, dir, vetor);
}

void quickSort(int vetor[], int tamanho){
    ordena(0, tamanho-1, vetor);
    printArray(vetor, tamanho);
}

int main(void) {
    int x;
    scanf("%d", &x);
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d", &vet[i]);
    }
    quickSort(vet, x);
}
