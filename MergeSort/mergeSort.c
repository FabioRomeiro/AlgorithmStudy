#include <stdio.h>

void intercala(int v[], int i, int i2, int t) 
{
	int v2[t-i];
	int a=0,a1=i,a2=i2;
	while(a1 < i2 && a2 < t)
	{
		if(v[a1] <= v[a2])
			v2[a++] = v[a1++];
		else
			v2[a++] = v[a2++];
	}
	for(;a1<i2;)
		v2[a++] = v[a1++];
	for(;a2<t;)
		v2[a++] = v[a2++];
	for(int count = 0; count < (t-i); count++)
		v[count+i] = v2[count];
}

void ordena(int v[], int i, int t)
{
	if((t-i) <= 1) return;
	int meio = (i+t)/2;
	ordena(v,i,meio);
	ordena(v,meio,t);
	intercala(v,i,meio,t);
}

void printaVetor(int v[],int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int main() 
{
	int v[] = {2,1,3,3,20,5,40,8};
	printaVetor(v,8);
	ordena(v,0,8);
	printaVetor(v,8);
	return 0;
}
