#include <stdio.h>
#include <stdlib.h>

struct celula {
	int valor;
	struct celula* proxima;
	struct celula* anterior;
} typedef CELULA;

void adiciona(CELULA* lst, int valor)
{
	CELULA* nova = malloc(sizeof(CELULA));
	nova -> valor = valor;

	CELULA* aux = lst;
	for(;aux->proxima != NULL;aux = aux->proxima);
	aux -> proxima = nova;
}

void printaLista(CELULA* lst)
{
	CELULA* aux = lst;
	for(;aux!=NULL;aux = aux->proxima)
		printf("%d ", aux->valor);
	printf("\n");
}

int main()
{
	CELULA* lst = NULL;
	printaLista(lst);
	adiciona(lst,10);
	printaLista(lst);
	adiciona(lst,85);
	printaLista(lst);

	return 0;
}
