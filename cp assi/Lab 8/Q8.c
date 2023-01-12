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
    if (p==1)
    {
        return re;
    }
    else
    {
        return re*powi(n,p-1);
    }
    
    
}
int main()
{
    int n, p;
    scanf("%d\n%d", &n, &p);

    printf("%d", powi(n, p));
    printf("Pratham Pali\n21112254");
    return 0;
}