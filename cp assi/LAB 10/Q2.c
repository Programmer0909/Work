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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" *");
        }
        
        printf("\n");
    }
    

    for (int  i = 1; i <= n; i++)
    {
        if (i<(n/2)+1)
        {
            for (int j = 0; j < n/2+i-1; j++)
            {
                printf("  ");
            }
            for (int k = 0; k < i; k++)
            {
                printf("* ");
            }
            for (int l = 0; l < i; l++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else if (i==(n/2)+1)
        {
            for (int a = 0; a < n; a++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            
        }
        
        
    }
    


    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" %d",i);
        }
        
        printf("\n");
    }




    int ct=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" %d",ct++);
        }
        
        printf("\n");
    }
    



    int ct=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" %c",'A'+ (ct++));
        }
        
        printf("\n");
    }
    

    printf("Pratham Pali\n21112254");
    return 0;
    
}