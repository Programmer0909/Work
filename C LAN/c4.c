#include <stdio.h>

/* AIM   : TESTING BREAK STATEMENT
   DATE  : 18/01/2022
   AUTHOR: PRATHAM PALI
*/

int main()
{
    int a, b;
    printf("NO. PLZ :\n");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        scanf("%d", &b);
        if (b > 10)
        {
            continue;
        }
        printf("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");
        printf("%d \n", i);
        if (b = 17)
        {
            break;
        }
    }
    return 0;
}
