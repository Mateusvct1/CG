#include "vet2D.h"

int main(){
   int a[2], b[2];
   printf("Digite o primeiro ponto a = (x1, y1): ");
   scanf("%d %d", &a[0], &a[1]);
   printf("Digite o primeiro ponto b = (x2, y1): ");
   scanf("%d %d", &b[0], &b[1]);
   vet2D(a,b);
   return 0;
}