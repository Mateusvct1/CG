#include "vet3D.h"
//1 - Encontrando o vetor a partir dos pontos(3D)
int main(){
   int a[3], b[3];
   printf("Digite o primeiro ponto a = (x1, y1, z1):");
   scanf("%d %d %d", &a[0], &a[1], &a[2]);
   printf("Digite o primeiro ponto b = (x2, y2, z2): ");
   scanf("%d %d %d", &b[0], &b[1], &b[2]);
   vet3D(a,b);
   return 0;
}