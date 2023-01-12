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
    int n,sum=0;
    scanf("%d",&n);
    while (n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d\n",sum);
    printf("Pratham Pali\n21112254");
    return 0;
    
}