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
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is max", a);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d is max", b);
        }
    }
    else
    {
        printf("%d is max", c);
    }

    printf("Pratham Pali\n21112254");
    return 0;
}