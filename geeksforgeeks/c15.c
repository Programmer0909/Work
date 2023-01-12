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
    for (int i = n; i > 0; i--)
    {
        
        for (int j = 0; j < i-1; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <=n-i+1 ; j++)
        {
            printf("%d " ,j);
        }
        for (int j = n-i; j > 0 ; j--)
        {
            printf("%d " ,j);
        }
        printf("\n");
        


    }
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}