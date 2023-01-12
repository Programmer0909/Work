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
    int r,c;
    scanf("%d\n%d",&r,&c);
    int arr1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&arr1[i][j]);
        }
        
    }
    int arr2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&arr2[i][j]);
        }
        
    }
    int arr3[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    printf("Pratham Pali\n21112254");
    return 0;
    
}