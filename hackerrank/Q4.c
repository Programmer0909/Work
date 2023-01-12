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
    printf("Enter 2 number :\n");
    float n1,n2;

    scanf("%f\n%f",&n1,&n2);
    printf("Enter the operator \n+\n-\n*\n/\n");

    char ch;
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("Result is %f\n",n1+n2);
        break;
    case '-':
        printf("Result is %f\n",n1-n2);
        break;
    case '*':
        printf("Result is %f\n",n1*n2);
        break;
    case '/':
        printf("Result is %f\n",n1/n2);
        break;
    default:
        printf("You entered a wrong output");
        break;
    }
    printf("Pratham Pali\n21112254");
    return 0;
    
}