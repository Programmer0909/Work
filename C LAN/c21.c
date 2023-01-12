#include <stdio.h>


/* AIM   : TESTING STATIC VARIABLE
DATE     : 13/02/2022
AUTHOR   :PRATHAM PALI
*/

int fun(){
    static int a = 5;
    a=a*6;
    return a;
}


int main()
{   
    int a1;
    a1 = fun();
    printf("%d \n" , a1);
    a1 = fun();
    printf("%d \n" , a1);

    return 0;
    
}