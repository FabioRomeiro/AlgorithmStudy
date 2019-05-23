#include <stdio.h>

int busca(int v[], int i, int f, int valor)
{
	if(i>f) return -1;
	int meio = (i+f)/2;
	if(v[meio] == valor) return meio;
	if(valor > v[meio])
		return busca(v,meio+1,f,valor);
	return busca(v,i,meio-1,valor);
}

int main()
{
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	int posicao = busca(v,0,9,10);
	if(posicao >= 0)
		printf("Ele está na posição %d\n", posicao);
	else
		printf("Ele não está nesse vetor\n");
	return 0;
}
