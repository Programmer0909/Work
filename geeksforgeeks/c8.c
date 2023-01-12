#include <stdio.h>

/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/

int che(int n, int arr[n], int su)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == su)
                {
                    printf("%d\t",i);
                    return k;
                }
            }
        }
    }

    return 0;
}

int main()
{
    int n, su;
    scanf("%d \n %d" , &n , &su);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int b;
        scanf("%d \n", &b);
        arr[i] = b;
    }

    printf("%d \n" , che(n, arr, su));


    return 0;
}