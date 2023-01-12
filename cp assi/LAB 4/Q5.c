#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("Freezing weather\n");
    }
    else if (n>0 && n<10)
    {
        printf("Very cold weather\n");
    }
    else if (n>10 && n<20)
    {
        printf("Cold weather\n");
    }
    else if (n>20 && n<30)
    {
        printf("Normal Temperature\n");
    }
    else if (n>30 && n<40)
    {
        printf("Its Hot\n");
    }
    else if (n>=40)
    {
        printf("Very Hot\n");
    }
    printf("Pratham Pali\n21112254");
    return 0;
}