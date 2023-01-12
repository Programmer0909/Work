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
    int n;
    printf("Enter computer number :");
    scanf("%d", &n);
    if ((n - 1) % 3 == 0)
    {
        printf("Working\n");
    }
    else
    {
        printf("Not working\n");
    }

    printf("Pratham Pali\n21112254");
    return 0;
}