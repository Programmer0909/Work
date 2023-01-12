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
    int m,p,c;
    scanf("%d\n%d\n%d",&m,&p,&c);
    if (m>=65 && p>=55 && c>=50)
    {
        if ((m+p+c)>=190 || (m+p)>=140)
        {
            printf("ELIGIBLE\n");
        }
        
    }
    else
    {
        printf("Not eligible\n");
    }
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}