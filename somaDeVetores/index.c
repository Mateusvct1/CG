#include "somaDeVetores.h"
#include "subDeVetores.h"
#include <stdio.h>
int main()
{
    int a[3], b[3], res;
    printf("Digite 1 para somar ou 2 para subtrair\n");
    scanf("%d", &res);

    if (res == 1){
        printf("Digite os valores de a = (x1, y1, z1): ");
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        printf("Digite o valores de b = (x2, y2, z2): ");
        scanf("%d %d %d", &b[0], &b[1], &b[2]);
        soma(a, b);
    } else if (res == 2){
        printf("Digite os valores de a = (x1, y1, z1): ");
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        printf("Digite o valores de b = (x2, y2, z2): ");
        scanf("%d %d %d", &b[0], &b[1], &b[2]);
        sub(a, b);
    }else{
        printf("Opcao invalida\n");
    }
    return 0;
}