public class SelectionSort {
	
	public static void main(String[] args) {

		int vetor[] = {15,45,21,87,20,64,8,1,5,10};
		SelectionSort.ordena(vetor, 10);
		SelectionSort.printaVetor(vetor,10);
	}

	public static void ordena(int v[], int n) {
		for(int i = 0;i<n;i++){
            int menor = i;
            for(int j = i+1; j<n; j++){
                if(v[menor]>v[j]){
                    menor = j;
                }
            }
            int aux = v[i]; v[i] = v[menor];
            v[menor] = aux;
        }
	}

	public static void printaVetor(int v[], int n) {

		for(int i = 0; i<n; i++) {
			System.out.println(v[i]);
		}
	}
}
