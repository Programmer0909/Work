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
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ",arr1[j][i]);
        }
        printf("\n");
    }

    printf("Pratham Pali\n21112254");
    return 0;
    
}