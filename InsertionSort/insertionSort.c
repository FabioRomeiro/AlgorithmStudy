#include "../base.h"

void ordena(int v[], int n) 
{
    for(int i = 1; i < n; i++)
    {
        int x = i;
        while(x != 0 && v[x] < v[x-1])
        {
            int aux = v[x];
            v[x] = v[x-1];
            v[x-1] = aux;
            x--;
        }
        
    }
}

int main() 
{
    testePadrao();
    return 0;
}