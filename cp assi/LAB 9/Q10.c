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
    int r,c,p;
    scanf("%d\n%d\n%d",&r,&c,&p);
    int arr1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&arr1[i][j]);
        }
        
    }
    int arr2[c][p];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d ",&arr2[i][j]);
        }
        
    }
    int arr3[r][p];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < p; j++)
        {
            arr3[i][j]=0;
        }
        
    }
    int sum=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < c; k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            arr3[i][j] = sum;
            sum=0;
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    printf("Pratham Pali\n21112254");
    return 0;
    
}