#include <stdio.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

int fibo(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
    
}

int main()
{
    int n;
    scanf("%d" , &n);
    printf("%d" , fibo(n));
    return 0;
    
}