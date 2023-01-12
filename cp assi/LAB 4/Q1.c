#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "church";
    char t[20];
    char *ss, *tt;
    ss = s;
    while (*ss != '\0')
    {
        *tt++ = *ss++;
    }
    printf("%s\n", tt);

    return 0;
}