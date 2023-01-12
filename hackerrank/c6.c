#include <stdio.h>
#include <string.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/
int main()
{
    char str[10000] ;
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c" , str[i]);
        if (str[i] == ' ')
        {
            printf("\n");
        }
        
    }
    
    return 0;
    
}