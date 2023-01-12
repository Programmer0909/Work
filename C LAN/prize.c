#include <stdio.h>
#include <stdlib.h>

/*  AIM     : IF ELSE STATEMENT TESTING VIA PRIZE DISTRIBUTION
    DATE    : 17/01/2022
    AUTHOR  : PRATHAM PALI
*/

int main()
{
    int maths,sci;
    printf("IF YOU PASSED IN MATHS TYPE 1 ELSE 0\n");
    scanf("%d" , &maths);
    printf("IF YOU PASSED IN MATHS TYPE 1 ELSE 0\n");
    scanf("%d" , &sci);

    if (maths==1 && sci==1){
        printf("YOU HAVE BEEN REWARDED 45 RS\n");
    }

    else if(maths==1){
        printf("YOU HAVE BEEN REWARDED 15 RS\n");
    }

    else if(sci==1){
        printf("YOU HAVE BEEN REWARDED 10 RS\n");
    }
    return 0;
}
