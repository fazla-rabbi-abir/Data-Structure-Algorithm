void selection_sort(int A[], int n)
{
    int min, temp;

    for(int i = 0; i < n - 1; i++)
    {
        min = i;  // assume current index is minimum

        for(int j = i + 1; j < n; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }

        // swap once per pass
        if(min != i)
        {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}