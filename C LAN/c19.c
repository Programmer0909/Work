#include <stdio.h>
#include <string.h>

/* AIM   : STRUCT PAIR TESTING
DATE     : 0
AUTHOR   :PRATHAM PALI
*/

struct student
{
    int class;
    char name[20];
    char section;

} s1, s2;

int main()
{
    struct student s1;
    s1.class = 10;
    strcpy(s1.name, "Pratham");
    s1.section = 'A';

    struct student s2;
    s2.class = 11;
    s2.section = 'B';
    strcpy(s2.name, "Naman");

    printf("STUDENT NAME : %s \n", s1.name);
    printf("STUDENT CLASS : %d \n", s1.class);
    printf("STUDENT SECTION : %c \n", s1.section);
    
    printf("STUDENT NAME : %s \n", s2.name);
    printf("STUDENT CLASS : %d \n", s2.class);
    printf("STUDENT SECTION : %c \n", s2.section);

    return 0;
}