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
    int res=1;
    for (int i = n; i > 0; i--)
    {
        res=res*i;
    }
    printf("%d\n",res);
    return res;
    printf("Pratham Pali\n21112254");
    return 0;
    
}