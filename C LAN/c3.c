#include <stdio.h>

/*  AIM     : WHILE LOOP STATEMENT TESTING VIA PRINTING MULTIPLICATION TABLE
    DATE    : 17/01/2022
    AUTHOR  : PRATHAM PALI
*/

int main()
{
    int a, b = 1, re = 1;
    printf("no. \n");
    scanf("%d", &a);

    while (b < 11)
    {
        re = a * b;

        printf("%d x %d = %d \n", a, b, re);
        b = b + 1;
    }

    return 0;
}
