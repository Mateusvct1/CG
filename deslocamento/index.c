#include "deslocamentoSub.h"
#include "deslocamentoSum.h"
#include <stdio.h>
// 3 - Realizando o deslocamento dos pontos usando os vetores
int main()
{

    int a[2], b[2], res;
    printf("Quer deslocar o vetor para frente - 1 ou para tras - 2?\n");
    scanf("%d", &res);

    if (res == 1){
        printf("Digite os valores de a = (x1, y1): ");
        scanf("%d %d", &a[0], &a[1]);
        printf("Digite o valores de b = (x2, y2): ");
        scanf("%d %d", &b[0], &b[1]);
        deslSub(a, b);
    } else if (res == 2){
        printf("Digite os valores de a = (x1, y1): ");
        scanf("%d %d", &a[0], &a[1]);
        printf("Digite o valores de b = (x2, y2): ");
        scanf("%d %d", &b[0], &b[1]);
        deslSum(a, b);
    }else{
        printf("Opcao invalida\n");
    }
    return 0;
}