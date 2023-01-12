#include <stdio.h>
void main()
{
    int a = 6;
    switch (a)
    {
    case 4:
        printf("A");
        break;
    case 3:
        printf("B");
    default:
        printf("C");
    case 1:
        printf("D");
        break;
    case 5:
        printf("E");
    }
}