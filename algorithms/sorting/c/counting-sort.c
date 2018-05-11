//
//  main.c
//  countingSort
//
//  Created by Pedro Manhez Naresi on 8/23/17.
//  Copyright © 2017 Pedro Manhez Naresi. All rights reserved.
//

#include <stdio.h>

void printArray(int vetor[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
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

void countingSort(int vetor[], int tamanho){
    int i = 1, maior;
    maior = vetor[i];
    for(i = 1; i <= tamanho; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }
    
    int vetc[maior+1];
    int vetb[tamanho+1];
    
    for(i = 0; i <= maior; i++){
        vetc[i] = 0;
    }
    
    for (int j = 1; j <= tamanho; j++) {
        vetc[vetor[j]]++;
    }
    
    for(i = 1; i <= maior; i++){
        vetc[i] = vetc[i] + vetc[i-1];
        
    }
    
    for (int j = tamanho; j > 0; j--) {
        vetb[vetc[vetor[j]]] = vetor[j];
        vetc[vetor[j]]--;
    }
    
    printArray(vetb, tamanho);
}

int main(void) {
    int x;
    scanf("%d", &x);
    int vet[x+1];
    for(int i = 1; i <= x; i++){    //Começa a partir do vetor[1] e não do vetor[0]
        scanf("%d", &vet[i]);
    }
    countingSort(vet, x);
}
