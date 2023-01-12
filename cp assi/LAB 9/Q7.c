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
    scanf("%d",&n);
    int arr1[n];
    printf("ARRAY 1 IS : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("ARRAY 2 IS : \n");

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}