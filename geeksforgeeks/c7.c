#include <stdio.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

int fact(int num){
    if (num == 1 || num ==0){
        return num;
    }
    else {
        printf("%d \n" , num);
        return (num * fact(num-1));
    }
}

int main()
{
    int n;
    scanf("%d" , &n);
    printf("\n fact is %d" , fact(n));
    return 0;
    
}