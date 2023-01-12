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
    int  a, maxiu = 0;
    
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a);
        (maxiu < a )? (maxiu = a) : (maxiu = maxiu);
    }
    printf("%d",maxiu);

    printf("Pratham Pali\n21112254");
    return 0;
}