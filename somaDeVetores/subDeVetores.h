#ifndef SUBDEVETORES_H
#define SUBDEVETORES_H
#include <stdio.h>

#define N 3
int sub(int a[N], int b[N]){
    int vet[N];
    for(int i = 0; i < N; i++){
        vet[i] = a[i] - b[i];
    }
    printf("(a-b) = <%d, %d, %d>:", vet[0],vet[1],vet[2]);
}

#endif