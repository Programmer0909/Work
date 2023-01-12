#include <stdio.h>


/* AIM   : SWAP VALUE OF INTEGER
DATE     : 
AUTHOR   :PRATHAM PALI
*/



void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

int main()
{
    int a=54 , b=79;
    printf("a is %d\n b is %d \n", a,b);
    swap(&a , &b);
    printf("a is %d\n b is %d", a,b);
    return 0;
    
}