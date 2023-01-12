#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


float F_C(float F)
{
    return ((F - 32) * 5) / 9;
}

float C_F(float C)
{
    return ((C * 9) / 5) + 32;
}

int main()
{
    float F, C;
    int ch;
    printf("What do you want to enter :\n1 for F\n2 for C");
    scanf("%d", &ch);

    if (ch == 1)
    {
        scanf("%f", &F);
        printf("%f", F_C(F));
    }
    else
    {
        scanf("%f", &C);
        printf("%f", C_F(C));
    }

    printf("Pratham Pali\n21112254");
    return 0;
}