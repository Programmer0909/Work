#include <stdio.h>

/* AIM   : SWAPING OF NUMBER
   DATE  : 22/01/2022
   AUTHOR: PRATHAM PALI
*/

int main()
{
    int a,b,t;


    printf("1st no. : \n");
    scanf("%d" , &a);
    printf("2 no. : \n");
    scanf("%d" , &b);

    t=a;
    a=b;
    b=t;

    printf("%d \n" , a);
    printf("%d \n" , b);


    return 0;
}
