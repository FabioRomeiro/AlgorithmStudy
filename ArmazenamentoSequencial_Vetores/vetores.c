#include <stdio.h>

void garanteEspaco(int vetor[], int* tamanhoVetor, int finalVetor)
{
	if(*tamanhoVetor == finalVetor)
	{
		int novoVetor[*tamanhoVetor * 2];
		for(int i = 0; i < *tamanhoVetor; i++)
		{
			novoVetor[i] = vetor[i];
		}
		*tamanhoVetor *= 2;
		vetor = novoVetor;
	}
}

void insere(int vetor[], int* tamanhoVetor, int* finalVetor, int valor)
{
	garanteEspaco(vetor, tamanhoVetor, *finalVetor);
	vetor[*finalVetor] = valor;
	(*finalVetor)++;
}

void insereNoIndice(int vetor[], int* tamanhoVetor, int* finalVetor, int valor, int indice)
{
	garanteEspaco(vetor, tamanhoVetor, *finalVetor);
	for(int i = *finalVetor; i > indice; i--)
		vetor[i] = vetor[i-1];
	vetor[indice] = valor;
	(*finalVetor)++;
}

void removeDoIndice(int vetor[], int tamanhoVetor, int* finalVetor, int indice)
{
	for(int i = indice; i < *finalVetor-1; i++)
		vetor[i] = vetor[i+1];
	vetor[*finalVetor-1] = 666;
	(*finalVetor)--;
}

void removeDoVetor(int vetor[], int tamanhoVetor, int* finalVetor)
{
	vetor[((*finalVetor)--)-1] = 666;
}

void printaVetor(int vetor[], int tamanhoVetor)
{
	for(int i = 0; i < tamanhoVetor; i++)
		printf("%d ", vetor[i]);
	printf("\n");
}

int main()
{
	int vetor[2];
	int fimVetor = 0;
	int tamanhoVetor = 2;

	printaVetor(vetor, tamanhoVetor);
	insere(vetor,&tamanhoVetor, &fimVetor, 10);
	printaVetor(vetor, tamanhoVetor);
	insereNoIndice(vetor, &tamanhoVetor, &fimVetor, 85, 1);
	printaVetor(vetor, tamanhoVetor);
	insere(vetor,&tamanhoVetor,&fimVetor, 90);
	printaVetor(vetor, tamanhoVetor);
	insere(vetor,&tamanhoVetor,&fimVetor, 32);
	printaVetor(vetor, tamanhoVetor);
	insereNoIndice(vetor, &tamanhoVetor, &fimVetor, 78, 1);
	printaVetor(vetor, tamanhoVetor);
	removeDoVetor(vetor, tamanhoVetor, &fimVetor);
	printaVetor(vetor, tamanhoVetor);
	removeDoIndice(vetor, tamanhoVetor, &fimVetor, 0);
	printaVetor(vetor, tamanhoVetor);
	return 0;
}
