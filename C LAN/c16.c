#include <stdio.h>

/* AIM   : ADD / SUB BY CALL BY REFERENCE
DATE     : 29/01/2022
AUTHOR   :PRATHAM PALI
*/

void fi(int *x, int *y)
{
    int t1,t2;
    t1= *x + *y;
    t2= *x - *y;
    *x=t1;
    *y=t2;
}

int main()
{
    int a = 4, b = 3;
    printf("a is : %d \nb is :%d \n", a + b, a - b);
    fi(&a, &b);
    printf("a is : %d \nb is :%d \n", a,b);

    return 0;
}