#include <stdio.h>

void ordena(int v[], int n) {
    for(int i = 0; i < n; i++) {
        int menor = i;
        for(int j = i + 1;j<n;j++){
            if(v[menor] > v[j]){
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void printaVetor(int v[], int n) {
    for(int i = 0; i<n; i++) {
        printf("%d ", v[i]);
    }
}

int main(){
	
	int vetor[] = {5,8,12,78,6,45,2,14,4,31};
	ordena(vetor, 10);
	printaVetor(vetor,10);

	return 0;
}
