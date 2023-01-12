#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     : CHECKING PRIME BY CALL BY VALUE
AUTHOR   :PRATHAM PALI
*/

int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", isprime(n));
    printf("Pratham Pali\n21112254");
    return 0;
}