#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/

int fact(int n)
{
    int res = 1;
    if (n == 1)
    {
        return res;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    printf("Pratham Pali\n21112254");
    return 0;
}