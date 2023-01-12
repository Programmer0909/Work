#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

int fact(int n){
    int m=1;
    for (int i = 2; i <=n; i++)
    {
        m=m*i;
    }
    return m;
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    printf("Pratham Pali\n21112254");
    return 0;
    
}