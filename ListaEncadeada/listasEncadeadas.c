#include <stdio.h>
#include <stdlib.h>

struct celula {
	int valor;
	struct celula* proxima;
} typedef CELULA;

void adicionaNoComeco(CELULA* lst, int valor)
{
	CELULA* nova = malloc(sizeof(CELULA));
	nova->valor = valor;
	nova->proxima = lst->proxima;
	lst->proxima = nova;
}

void adiciona(CELULA* lst, int valor)
{
	CELULA* nova = malloc(sizeof(CELULA));
	nova -> valor = valor;

	CELULA* aux = lst;
	for(;aux->proxima != NULL;aux = aux->proxima);
	aux -> proxima = nova;
}

void removeComeco(CELULA *lst)
{
	lst->proxima = (lst->proxima)->proxima;
}

void removeFinal(CELULA *lst)
{
	CELULA* aux = lst;
	for(;(aux->proxima)->proxima != NULL; aux = aux-> proxima);
	aux -> proxima = NULL;
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
	CELULA* lst = malloc(sizeof(CELULA));
	printaLista(lst);
	adiciona(lst,10);
	printaLista(lst);
	adiciona(lst,85);
	printaLista(lst);
	adicionaNoComeco(lst,72);
	printaLista(lst);
	removeComeco(lst);
	printaLista(lst);
	removeFinal(lst);
	printaLista(lst);
	removeFinal(lst);
	printaLista(lst);

	return 0;
}
