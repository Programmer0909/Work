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
    int n1,n2,n3,per;
    scanf("%d\n%d\n%d",&n1,&n2,&n3);
    printf("TOTAL IS : %d\n",n1+n2+n3);
    per=(n1+n2+n3)/3;
    printf("PERCENT IS %d\n",per);
    if (per>=60)
    {
        printf("Division First\n");
    }
    else if (per<48 && per>=36)
    {
        printf("Division Second\n");
    }
    else
    {
        printf("Fail\n");
    }
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}