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
    float x1, x2, x3, y1, y2, y3, ar;
    scanf("%f\n%f\n%f\n%f\n%f\n%f\n" , &x1, &x2, &x3, &y1, &y2, &y3);
    ar = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
    if (ar == 0)
    {
        printf("Colinear\n");
    }
    else
    {
        printf("Colinear\n");
    }

    printf("Pratham Pali\n21112254");
    return 0;
}