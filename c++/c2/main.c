#include <stdio.h>
#include <stdlib.h>

/*  AIM     : IF ELSE STATEMENT TESTING VIA VOTE AGE
    DATE    : 17/01/2022
    AUTHOR  : PRATHAM PALI
*/


int main()
{
    int age;
    printf("ENTER AGE PLZ: \n");
    scanf("%d" , &age);

    if (age<18){
        printf("Sorry you cant vote\n");
    }

    else{
        printf("YES YOU CAN VOTE");
    }


    return 0;
}
