#include <stdio.h>
#include <stdlib.h>

struct ARVORE {
	int valor;
	struct ARVORE* dir;
	struct ARVORE* esq;
} typedef ARVORE;

int ehEspelhado(ARVORE* raiz1, ARVORE* raiz2)
{
	if(!raiz1 && !raiz2) return 1;
	if(!raiz1 || !raiz2) return 0;
	return (raiz1->valor == raiz2->valor && ehEspelhado(raiz1->esq,raiz2->dir) && ehEspelhado(raiz1->dir,raiz2->esq));
}

int main()
{
	ARVORE * raiz = malloc(sizeof(ARVORE));	
	ARVORE * dir = malloc(sizeof(ARVORE));	
	ARVORE * esq = malloc(sizeof(ARVORE));	
	raiz -> valor = 1;
	dir -> valor = 2;
	esq -> valor = 0;

	ARVORE * raiz2 = malloc(sizeof(ARVORE));
	ARVORE * dir2 = malloc(sizeof(ARVORE));
	ARVORE * esq2 = malloc(sizeof(ARVORE));
	raiz2 -> valor = 1;
	dir2 -> valor = 0;
	esq2 -> valor = 2;

	printf("%d\n", ehEspelhado(raiz,raiz2));

	return 0;
}
