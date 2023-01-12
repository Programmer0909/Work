#include <stdio.h>

/*
STAR PATERN
            * * * * * 
            * * * *   
            * * *     
            * *       
            *
*/
int main()
{
    int n;
    printf("NO. TO DO CHACHA : \n");
    scanf("%d" , &n);

    for (int i=n ;  i >0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
    
}