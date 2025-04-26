#ifndef MULTESCALAr_H
#define MULTESCALAR_h

#include <stdio.h>

int multEscalar(int v[2], int escalar){

    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);
    printf("Digite o vetor v = (x, y): (digite um espaco entre os numeros)\n");
    scanf("%d %d", &v[0], &v[1]);
    printf("%d * <%d,%d>",escalar, v[0],v[1]);
    for(int i = 0; i < 2; i++){
        v[i] = v[i] * escalar;
    }
    
    printf(" = <%d, %d>:", v[0],v[1]);
}
#endif