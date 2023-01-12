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
    int f=0,l=1,temp,sum=0;

    scanf("%d",&n);
    if (n==1)
    {
        printf("0");
    }
    else if (n==2)
    {
        printf("0");
        printf("1");
    }
    printf("0 ");
    printf("1 ");
    while (n>2)
    {
        
        sum=f+l;
        printf("%d ",sum);
        f=l;
        l=sum;
        n--;
    }
    
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}