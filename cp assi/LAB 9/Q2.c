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

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
    printf("Pratham Pali\n21112254");
    return 0;
}