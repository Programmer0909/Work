#include <stdio.h>

/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        arr[i] = a;
    }
    
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    

    
    return 0;
}