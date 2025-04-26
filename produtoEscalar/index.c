#include "produtoEscalar.h"
#define tam 2
// 7 - Produto escalar 
int main(){
    int x[tam],y[tam],z[tam];
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor de x%d: ", i+1);
        scanf("%d", &x[i]);
        printf("Digite o valor de y%d: ", i+1);
        scanf("%d", &y[i]);
        printf("Digite o valor de z%d: ", i+1 );
        scanf("%d", &z[i]);
        
    }
    prodEscalar(x[0],y[0],z[0],x[1],y[1],z[1]);
}