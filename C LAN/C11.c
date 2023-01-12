#include <stdio.h>

/* AIM   : 
   DATE  : 
   AUTHOR: PRATHAM PALI
*/

int main()
{
    int a=17;
    int *ptra = &a;
    printf("the address of a is %p \n" , ptra);
    printf("the address of pointer to a is %p \n" , &ptra);
    printf("the value of a is %d", *ptra);

    
    
    return 0;
}
