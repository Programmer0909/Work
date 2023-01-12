#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max, smax;
    if (arr[0] > arr[1])
    {
        max = arr[0];
        smax = arr[1];
    }
    else if (arr[1] > arr[0])
    {
        max = arr[1];
        smax = arr[0];
    }
    for (int l = 2; l < n; l++)
    {
        if (arr[l] > max)
        {
            smax = max;
            max = arr[l];
        }
        else if (arr[l]>smax)
        {
            smax=arr[l];
        }
        
    }
    
    printf("%d",smax);
    printf("Pratham Pali\n21112254");
    return 0;
}