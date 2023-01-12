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
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        
    }
    int sum=0 , pr=1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum=sum+arr[i][j];
            pr=pr*arr[i][j];
        }
        
    }
    printf("%d\n%d",sum,pr);
    printf("Pratham Pali\n21112254");
    return 0;
    
}