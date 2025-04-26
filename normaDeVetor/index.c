#include "norma.h"

int main(){
    int a[3];
    printf("Digite o ponto a = (x, y, z): (digite um espaco entre os numeros)\n");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    printf("vetor |a| = √(x²+ y² + z²) = %d\n", Norma(a[0], a[1], a[2]));
    return 0;
}

 