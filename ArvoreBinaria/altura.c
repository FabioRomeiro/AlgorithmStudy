#include <stdio.h>
#include <stdlib.h>

struct ARVORE {
	int valor;
	struct ARVORE* dir;
	struct ARVORE* esq;
} typedef ARVORE;

int altura(ARVORE* R, int elemento)
{
	if(!R || R->valor == elemento) return 1;
  int esquerda = alturaAteElemento(R->esq, elemento);
  int direita = alturaAteElemento(R->dir, elemento);
  if (esquerda > direita)
  {
    return esquerda;
  } else {
    return direita;
  }
  
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
