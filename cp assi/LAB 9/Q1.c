#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, p - 1);
    }
}

int main()
{
    int n, p;
    scanf("%d\n%d", &n, &p);
    printf("%d", power(n, p));
    printf("Pratham Pali\n21112254");
    return 0;
}