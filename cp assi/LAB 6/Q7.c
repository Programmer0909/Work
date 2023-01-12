#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n,temp,ct=0,sum=0;
    float rem;
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        ct++;
        temp=temp/10;
    }
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,ct);
        temp=temp/10;
    }
    if (n==sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not an armstrong number\n");
    }
    
    
    printf("Pratham Pali\n21112254");
    return 0;
    
}