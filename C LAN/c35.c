#include <stdio.h>
#include <string.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/
int main()
{
    char s1[100] , s2[100] , s3[100];
    gets(s1);
    
    gets(s2);
    
    strcpy(s3,strcat(s1 , " is a friend of "));
    printf("%s" , strcat(s3,s2));
    return 0;
    
}