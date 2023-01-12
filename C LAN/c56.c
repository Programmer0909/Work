#include <stdio.h>
int main()
{
    int a;
    float b;
    char x;


    printf("enter any character");
    scanf("%c", &x);
    printf("enter any integer value");
    scanf("%d", &a);
    printf("enter any float value");
    scanf("%f", &b);

    printf(" \n The Integer Value that you Entered is = %d", a);
    printf(" \n The Character that you Entered is = %c", x);
    printf(" \n The Float Value that you Entered is=  %f", b);
    return 0;
}