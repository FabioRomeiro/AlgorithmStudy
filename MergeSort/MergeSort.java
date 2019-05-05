public class MergeSort {

	public static void main(String[] args) 
	{
		int v[] = {2,1,3,3,20,5,40,8};

		MergeSort.printaVetor(v,8);
		MergeSort.ordena(v,0,8);
		MergeSort.printaVetor(v,8);
	}

	public static void ordena(int v[], int i, int t) 
	{
		if((t-i) <= 1) return;
		int meio = (i+t)/2;
		MergeSort.ordena(v,i,meio);
		MergeSort.ordena(v,meio,t);
		MergeSort.intercala(v,i,meio,t);
	}

	public static void intercala(int v[], int i, int m, int t) 
	{
		int v2[] = new int[t-i];
		int a = 0;
		int a1 = i;
		int a2 = m;
		while(a1 < m && a2 < t)
		{
			if(v[a1] <= v[a2])
				v2[a++] = v[a1++];
			else 
				v2[a++] = v[a2++];
		}
		for(;a1 < m;)
			v2[a++] = v[a1++];
		for(;a2 < t;)
			v2[a++] = v[a2++];
		for(int j = 0; j < a; j++)
			v[j + i] = v2[j];
	}

	public static void printaVetor(int v[], int n)
    {
        for(int i = 0; i<n; i++)
        {
			System.out.print(v[i]+" ");
		}
		System.out.println();
	}

}
