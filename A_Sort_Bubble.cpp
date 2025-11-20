void bubble_sort(int A[], int n) 
{
    int temp, flag;

    for(int i = 1; i < n; i++)
    { 
        flag = 0;  // assume no swap

        for(int j = 0; j < (n - i); j++)
        {
            if(A[j] > A[j + 1])
            {
                // swap
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                flag = 1; // swap happened
            }
        }

        // If no swap happened, array is already sorted
        if(flag == 0)
        {
            break;
        }
    }
}
