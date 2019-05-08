public class QuickSort 
{
	public static void main(String[] args)
	{
		int v[] = {4,8,10,13,6,9,9,5,7};
		QuickSort.printavetor(v,9);
		QuickSort.ordena(v,0,9);
		QuickSort.printavetor(v,9);
	}

	public static void ordena(int v[], int i, int t)
	{
		if((t-i) <= 1) return;
		int pivot = QuickSort.particiona(v,i,t);
		QuickSort.ordena(v,pivot+1,t);
		QuickSort.ordena(v,i,pivot);
	}

	public static int particiona(int v[], int i, int t)
	{
		int menores = 0;
		int pivot = v[t-1];
		for(int j = 0; j < (t - 1); j++)
		{
			if(v[j] <= pivot) 
			{
				QuickSort.troca(v,j,menores);
				menores++;
			}
		}
		QuickSort.troca(v,t-1,menores);
		return menores;
	}

	private static void troca(int v[], int p1, int p2)
	{
		int aux = v[p1];
		v[p1] = v[p2];
		v[p2] = aux;
	}

	public static void printavetor(int v[], int n)
	{
		for(int i = 0; i < n; i++)
			System.out.print(v[i] + " ");
		System.out.println();
	}
}
