#ifndef DESLOCAMENTOSUM_H
#define DESLOCAMENTOSUM_H
#include <stdio.h>

int deslSum(int a[2],int b[2]){
    int vet[2];
    for(int i = 0; i < 2; i++){
        vet[i] = a[i] + b[i];
    }
    printf("(a+b) = (%d, %d):", vet[0],vet[1]);
}

#endif