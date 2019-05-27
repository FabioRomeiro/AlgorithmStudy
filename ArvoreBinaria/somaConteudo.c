#include <stdio.h>
#include <stdlib.h>

struct ARVORE {
	int valor;
	struct ARVORE* esq;
	struct ARVORE* dir;
} typedef ARVORE;

struct CELULA {
	int valor;
	struct CELULA* prox;
} typedef CELULA;

int somaConteudo(ARVORE* raiz)
{
	int somaEsquerda = 0, somaDireita = 0;
	if(!raiz) return 0;
	if(raiz->esq) somaEsquerda = somaConteudo(raiz->esq);
	if(raiz->dir) somaDireita = somaConteudo(raiz->dir);
	return raiz->valor + somaEsquerda + somaDireita;
}

int somaConteudoIterativo(ARVORE* raiz)
{
	int soma = 0;
	ARVORE* aux = raiz;
}

int main()
{
	ARVORE* raiz = malloc(sizeof(ARVORE));
	raiz->valor = 5;
	
	ARVORE* esq = malloc(sizeof(ARVORE));
	ARVORE* dir = malloc(sizeof(ARVORE));

	dir->valor = 8;
	esq->valor = 2;

	raiz->dir = dir;
	raiz->esq = esq;
	
	printf("%d\n", somaConteudo(raiz));

	return 0;
}
