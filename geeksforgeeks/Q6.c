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
    float r, x1, y1, c1, c2, d, p;
    scanf("%f\n%f\n%f\n%f\n%f\n", &r, &x1, &y1, &c1, &c2);
    d = (x1 - c1) * (x1 - c1) + (y1 - c2) * (y1 - c2);
    p = sqrt(d);
    if (p == r)
    {
        printf("ON THE CIRCLE");
    }
    else if (p > r)
    {
        printf("OUTSIDE THE CIRCLE");
    }
    else
    {
        printf("INSIDE THE CIRCLE");
    }

    printf("Pratham Pali\n21112254");
    return 0;
}