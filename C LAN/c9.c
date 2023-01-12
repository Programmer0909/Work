#include <stdio.h>

/* AIM   : ADDITION OF EACH TERM
   DATE  : 22/01/2022
   AUTHOR: PRATHAM PALI
*/

int main()
{
    int a, sum1, sum2, rem;
    printf("ENTER NO. :");
    scanf("%d", &a);
    int num[4];

    for (int i = 0; i < 3; i++)
    {
        rem = a % 10;
        printf("%d \n", rem);

        num[i] = rem;
        a = (a - rem) / 10;
        printf("%d \n", a);
    }

    sum1 = num[0];
    sum2 = num[3];
    printf("SUM IS %d \n", sum1);
    printf("SUM IS %d \n", sum2);

    return 0;
}
