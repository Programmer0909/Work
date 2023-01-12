#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     : CALL BY REFRENCE

*/

int isprime(int *ptr)
{
    
    for (int i = 2; i < *ptr; i++)
    {
        if (*ptr % i == 0)
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

    printf("%d\n", isprime(&n));

    printf("Pratham Pali\n21112254");
    return 0;
}