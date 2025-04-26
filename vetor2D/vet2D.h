#include <stdio.h>
#ifndef VET2D_H
#define VET2D_H

int vet2D(int a[2], int b[2]){
    int vetor[2];
    for(int i = 0; i < 2; i++){
      vetor[i] =  b[i] - a[i];

    }
    printf("(b-a) = <%d, %d>:", vetor[0],vetor[1]);
    return 0;
}

#endif