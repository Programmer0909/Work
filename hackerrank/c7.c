#include <stdio.h>
#include <string.h>

/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{

    char str[10000];
    gets(str);
    for (int i = 48; i < 57; i++)
    {
        int ct = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == i)
            {
                ct += 1;
            }
        }
        printf("%d ", ct);
    }

    return 0;
}