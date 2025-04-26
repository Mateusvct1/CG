#include "normalizacao.h"

int main(){
    
    int x, y, z;
    printf("Digite o vetor v = (x, y, z): (digite um espaco entre os numeros)\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("v = <%d,%d,%d> = ", x,y,z);
    normaLizacao(x,y,z);
    
    return 0;
}
