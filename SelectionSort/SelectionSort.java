public class SelectionSort {
	
	public static void main(String[] args) {

		int vetor[] = {15,45,21,87,20,64,8,1,5,10};
		for(int i = 0;i<10;i++){
			int menor = i;
			for(int j = i+1; j<10; j++){
				if(vetor[menor]>vetor[j]){
					menor = j;
				}
			}
			int aux = vetor[i]; vetor[i] = vetor[menor];
			vetor[menor] = aux;
		}
		SelectionSort.printaVetor(vetor,10);
	}

	public static void printaVetor(int v[], int n) {

		for(int i = 0; i<n; i++) {
			System.out.println(v[i]);
		}
	}
}
