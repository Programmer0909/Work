#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/

void srdec(char s[], int n)
{
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - i - 2];
        s[n - i - 2] = temp;
    }
    printf("%s\n",s);
}

void ct(char s[], int n)
{
    int ctv=0, ctc=0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            ctv++;
        }
        else
        {
            ctc++;
        }
    }
    printf("%d\n%d", ctv, ctc);
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);

    srdec(s, n);
    ct(s, n);
    printf("Pratham Pali\n21112254");
    return 0;
}