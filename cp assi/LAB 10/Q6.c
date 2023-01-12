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
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    int a1[n1], a2[n2];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d\n", &a1[i]);
    }
    for (int j = 0; j < n2; j++)
    {
        scanf("%d\n", &a2[j]);
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j])
            {
                break;
            }
            else if (j == (n2-1))
            {
                printf("%d", a1[i]);
            }
        }
    }

    printf("Pratham Pali\n21112254");
    return 0;
}