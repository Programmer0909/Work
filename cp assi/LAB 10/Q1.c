#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

void isprime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return;
        }
    }
    printf("%d ", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        isprime(i);
    }

    printf("\nPratham Pali\n21112254");
    return 0;
}