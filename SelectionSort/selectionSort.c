#include <stdio.h>
#include "../base.h"

void ordena(int v[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        int menor = i;
        for(int j = i + 1;j<n;j++)
        {
            if(v[menor] > v[j])
            {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

int main()
{
    testePadrao();
    return 0;
}
