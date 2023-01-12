#include <stdio.h>

/* STAR PATERN*         
* *       
* * *     
* * * *   
* * * * * 
*/
int main()
{
    int n;
    printf("sfjkkkkkk");
    scanf("%d" , &n);

    for(int i=1 ; i<=n ; i++){
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    
}