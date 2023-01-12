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
    int n1,n2;
    scanf("%d\n%d",&n1,&n2);
    printf("DEMONSTRATION OF BITWISE OPERATORS\n");
    printf("%d\n",n1&n2);
    printf("%d\n",n1|n2);
    printf("%d\n",n1^n2);
    printf("%d\n",~n2);
    printf("DEMONSTRATION OF LOGICAL OPERATORS\n");
    printf("%d\n",n1&&n2);
    printf("%d\n",n1||n2);
    printf("%d\n",!n2);

    printf("Pratham Pali\n21112254");
    return 0;
    
}