#include <stdio.h>
#include <stdlib.h>

/*  AIM     : SWITCH CASE STATEMENT TESTING VIA VOTING CRITERIA
    DATE    : 17/01/2022
    AUTHOR  : PRATHAM PALI
*/

int main()
{
    int a;
    printf("ENTER YOUR AGE :\n");
    scanf("%d", &a);

    switch (a)
    {
    case 3:
        printf("YOU ARE TO YOUNG TO VOTE\n");
        break;

    case 10:
        printf("YOU CAN VOTE IN KIDS CATEGORY\n");
        break;

    case 18:
        printf("YOU CAN VOTE IN TEEN CATEGORY\n");
        break;

    case 19:
        printf("YOU CAN VOTE IN ADULT CATEGORY\n");
        break;
    }
    return 0;
}
