#include <stdio.h>

/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < 5; i++)
    {
        sum = sum + (a % 10);
        a = a / 10;
        printf("%d \n" , sum);
    }

    return 0;
}