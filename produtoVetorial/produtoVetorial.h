#ifndef PRODUTOVETORIAL_H
#define PRODUTOVETORIAL_H
#include <stdio.h>


int produtoVetorial(int x1, int y1, int z1, int x2, int y2, int z2){
    int i = (y1 * z2) - (z1 * y2);
    int j = (z1 * x2) - (x1 * z2);
    int k = (x1 * y2) - (y1 * x2);
     
    printf("<i%d,j%d,k%d>", i,j,k);
    
    return 0;
}
#endif