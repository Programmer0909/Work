#include <stdio.h>
#include <string.h>

/* AIM   : 1. INPUT AND PRINT STRING
           2. S1 IS A FRIEND OF S2
DATE     :09/02/2022
AUTHOR   :PRATHAM PALI

*/

int main()
{
    // char str[50];
    // gets(str);
    // printf("%s \n", str);
    // puts(str);

    // char st[] = {'p', 'r', 'a', 't', 'h', 'a', 'm'};
    // puts(st);
    // for (int i = 0; i < 15; i++)
    // {
    //     printf("%c" , st[i]);
    // }
    
    char s1[100];
    char s2[100];
    char s3[600] = " is a friend of ";
    char s4[100];

    gets(s1);
    gets(s2);

    strcpy(s4,strcat(s1,s3));
    strcpy(s4,strcat(s4,s2));
    puts(s4);

    return 0;
}