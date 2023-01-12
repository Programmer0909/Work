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
    int app[n];

    for (int i = 0; i < n; i++)
    {
        app[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",app[i]);
    }
    
    printf("Pratham Pali\n21112254");
    return 0;
}