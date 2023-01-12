#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a = pow(2, i);
        if (!(a ^ n))
        {
            printf("It is a power of 2\n");
            return 0;
        }
    }
    printf("Not a power of 2\n");
    printf("Pratham Pali\n21112254");
    return 0;
}