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
    for (int i = 0; i < n; i++)
    {
        if (arr1[i]%2==0)
        {
            arr1[i]=0;
        }
        else
        {
            arr1[i]=1;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("Pratham Pali\n21112254");
    return 0;
    
}