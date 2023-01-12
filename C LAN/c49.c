#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/

int windec(int a, int b)
{
    static int ussr = 0;
    static int cpsr = 0;

    if (b == a + 1)
    {
        printf("User lost \n user : %d \n computer : %d ", ussr, cpsr = cpsr + 1);
    }

    else if (a == b + 1)
    {
        printf("User won \n user : %d \n computer : %d ", ussr = ussr + 1, cpsr);
    }

    else if (b == a + 2)
    {
        printf("User won \n user : %d \n computer : %d ", ussr = ussr + 1, cpsr);
    }

    else if (a == b + 2)
    {
        printf("User lost \n user : %d \n computer : %d ", ussr, cpsr = cpsr + 1);
    }

    else
    {
        printf("Draw ");
    }
    
}

int main()
{
    printf("Hello user /n Please enter your name : ");
    char nm[100];
    gets(nm);
    for (int i = 0; i < 3; i++)
    {
        printf("Hello %s \n Press 0 for rock , 1 for pper , 2 for scissors : ", nm);
        int ip, cp;
        scanf("%d", &ip);
        srand(time(NULL));
        cp = rand() % 3;
        printf("Computer input : %d \n", cp);
        windec(ip, cp);
        printf("\n");
    }
    
    return 0;
}