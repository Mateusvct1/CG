#ifndef  PRODUTOESCALAR_H
#define  PRODUTOESCALAR_H
#include <stdio.h>

int prodEscalar(int x1,int y1, int z1, int x2, int y2, int z2){
    int escalar = (x1 * x2) + (y1 * y2) + (z1 * z2);
    
    printf(" axb = %d\n", escalar);
    
    return 0;
}

#endif