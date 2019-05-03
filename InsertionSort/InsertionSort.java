public class InsertionSort 
{    
    public static void main(String[] args) 
    {

        int vetor[] = { 15, 45, 21, 87, 20, 64, 8, 1, 5, 10 };
        InsertionSort.ordena(vetor, 10);
        InsertionSort.printaVetor(vetor, 10);
    }

    public static void ordena(int v[], int n) 
    {
        for (int i = 1; i < n; i++) 
        {
            int x = i;
            while (x != 0 && v[x] < v[x-1]) 
            {
                int aux = v[x];
                v[x] = v[x-1];
                v[x-1] = aux;
                x--;
            }
        }
    }
    
    public static void printaVetor(int v[], int n) 
    {
        for (int i = 0; i < n; i++) 
        {
            System.out.print(v[i] + " ");
        }
        System.out.println();
    }

}