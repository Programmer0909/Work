#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* AIM   :
DATE     :
AUTHOR   :PRATHAM PALI
*/
int main()
{
    char *ptr;
    int n;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        ptr = (char *)calloc(n+1, sizeof(char));
        scanf("%s", ptr);
        printf("%s", ptr);
        free(ptr);
    }
    
    
    

    
    return 0;
}