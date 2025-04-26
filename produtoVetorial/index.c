#include "produtoVetorial.h"


int main(){
    int x[2],y[2],z[2];
    for(int i=0;i<2;i++){
        printf("digite o valor de x[%d] e y[%d] z[%d](de um espaco para cada valor):\n",i,i,i);
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        
    }
    printf("|i  j  k|\n|%d  %d  %d|\n|%d  %d  %d| = ",x[0],y[0],z[0],x[1],y[1],z[1]);
    produtoVetorial(x[0],y[0],z[0],x[1],y[1],z[1]);
    printf("\n");
    

}