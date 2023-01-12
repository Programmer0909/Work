#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* AIM   : REVERSE A STRING USING POINTERS
DATE     : 
AUTHOR   :PRATHAM PALI
*/
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    printf("String : \n");
    scanf("%s", &s);
    char *temp;
    for (int i = 0; i < n / 2; i++)
    {
        *temp = s[i];
        *(s + i) = *(s + n - i - 2);
        *(s + n - i - 2) = *temp;
    }
    printf("%s", s);
    printf("Pratham Pali\n21112254");
    return 0;
}