#include <stdio.h>
#ifndef VET2D_H
#define VET2D_H

int vet3D(int a[3], int b[3]){
  int vetor[3];
  for (int i = 0; i < 3; i++)
  {
    vetor[i] = b[i] - a[i];
  }
  printf("(b-a) = <%d, %d, %d>:", vetor[0], vetor[1], vetor[2]);
  return 0;
}

#endif