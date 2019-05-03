#include <stdio.h>

void printaVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ordena(int v[], int n);

void testePadrao() 
{
    int vetor[] = {15, 45, 21, 87, 20, 64, 8, 1, 5, 10};
    ordena(vetor, 10);
    printaVetor(vetor, 10);
}