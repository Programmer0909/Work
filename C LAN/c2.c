#include <stdio.h>

/* AIM   : CALL BY FUNCTION
DATE     : 26/1/2022
AUTHOR   : PRATHAM PALI
*/

void fun(int *add)
{
    *add = 399;
}

int main()
{
    int a = 56;
    printf("%d\n", a);
    fun(&a);
    printf("%d\n", a);
    return 0;
}