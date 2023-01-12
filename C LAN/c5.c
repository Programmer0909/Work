#include <stdio.h>

/* AIM   : FACTORIAL OF A FUNCTION
   DATE  : 20/01/2022
   AUTHOR: PRATHAM PALI
*/

unsigned long long int fact(int num)
{
    unsigned long long int res = 1;
    for (int i = 1; i <= num; i++)
    {
        res = res * i;
        
    }
    return res;
}

void numcheck(num)
{
    unsigned long long int val;
    if (num < 0)
    {
        printf("FACTORIAL OF NEGATIVE NUMBER DOESNT EXIST\n");
    }

    else if (num == 0)
    {
        printf("ZERO FACTORIAL IS ONE\n");
    }

    else
    {
        val = fact(num);
        printf("FACTORIAL OF %d IS %d", num, val);
    }
}

int main()
{
    long int num;
    printf("ENTER THE NUMBER : \n");
    scanf("%d", &num);

    numcheck(num);

    return 0;
}
