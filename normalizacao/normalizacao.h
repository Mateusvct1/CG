#ifndef NORMALIZACAO_H
#define NORMALIZACAO_H
#include <stdio.h>
#include <math.h>



int normaLizacao(int x, int y, int z){
   
    int valor = (pow(x, 2) + pow(y, 2) + pow(z, 2));
    double norma = sqrt(valor);
    int normalizacao = 0;

    if (norma == (int)norma){
        
        normalizacao = printf("%d/%.0lf, %d/%.0lf, %d/%.0lf", x, norma, y, norma, z, norma);
    }else{
        normalizacao = printf("<%d/raiz(%d), %d/raiz(%d), %d/raiz(%d)>", x, valor, y, valor, z, valor);
    }

    return normalizacao;
}
#endif