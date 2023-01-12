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
    int n, ctp=0, ctn=0, ctz=0;
    char ch='y';
    while (ch == 'y')
    {
        printf("Enter number : ");
        scanf("%d", &n);
        if (n > 0)
        {
            ctp++;
        }
        else if (n < 0)
        {
            ctn++;
        }
        else
        {
            ctz++;
        }
        printf("Do you want to continue (y or n) : ");
        scanf(" %c", &ch);
    }
    printf("Positive : %d\nNegative : %d\nZeroes : %d\n", ctp, ctn, ctz);

    printf("Pratham Pali\n21112254");
    return 0;
}