#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }

    if (rev==temp)
    {
        printf("Palindrome\n");
    }
    
    else
    {
        printf("Not a palindrome\n");
    }
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}