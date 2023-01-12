#include <stdio.h>

/* AIM   : ADDITION OF EACH TERM
   DATE  : 22/01/2022
   AUTHOR: PRATHAM PALI
*/

int main()
{
    int a, sum = 0, rem;
    printf("ENTER NO. :");
    scanf("%d", &a);

    for (int i = 0; i < 3; i++)
    {
        rem = a % 10;
        a = (a - rem) / 10;
        sum = sum + rem;
        printf("the sum is %d \n", sum);
    }
    return 0;
}
