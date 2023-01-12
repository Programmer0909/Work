void rotate(int arr[], int n)
{
    int temp;
    temp=arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        temp=arr[n];
        arr[n-i] = arr[n-1-i];
        arr[0]=temp;
    }
    
}
