#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int i=1;
    while (i == 1)
    {
        printf("Press 1 for Positive and Negative Operation\nPress 2 for Even and Odd operations");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the number:\n");
            float n;
            scanf("%f", &n);
            if (n >= 0)
            {
                printf("Positive\n");
            }
            else
            {
                printf("Negative\n");
            }
            printf("Do you want to continue:\n");
            scanf("%d", &i);
            break;
        }
        case 2:
        {
            printf("Enter the number:\n");
            int n;
            scanf("%d", &n);
            if (n % 2 == 0)
            {
                printf("Even\n");
            }
            else
            {
                printf("Odd\n");
            }
            break;
        }
        default:
        {
            printf("You entered a wrong number\n");
        }
        }
    }

    printf("Pratham Pali\n21112254");
    return 0;
}