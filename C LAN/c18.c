#include <stdio.h>

/* AIM   : REVERSE A ARRAY
DATE     :
AUTHOR   :PRATHAM PALI
*/

void revo(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = temp;
    }
}

void pr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("THE %d ELEMENT IS : %d \n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    pr(arr, 8);
    revo(arr, 8);
    pr(arr, 8);
    return 0;
}