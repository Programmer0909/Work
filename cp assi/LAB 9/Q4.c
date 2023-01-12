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
    int n, ct=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int app[100];
    for (int i = 0; i < 100; i++)
    {
        app[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        app[arr[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (app[i] > 1)
        {
            printf("%d ", i);
            ct++;
        }
    }
    printf("\nTotal number of repeated elements = %d\n",ct);

    printf("Pratham Pali\n21112254");
    return 0;
}