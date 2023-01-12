#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int powi(int n, int p)
{
    int re = 1;
    for (int i = 0; i < p; i++)
    {
        re = re * n;
    }
    return re;
}
int main()
{
    int n, p;
    scanf("%d\n%d", &n, &p);

    printf("%d", powi(n, p));
    printf("Pratham Pali\n21112254");
    return 0;
}