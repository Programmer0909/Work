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
    // ********** READING FROM A FILE ***********
    // FILE *ptr = NULL;
    // char string[100];
    // ptr = fopen("c51.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("%s", string);

    // ********** WRITING FROM A FILE ***********
    FILE *ptr = NULL;
    char string[100] = "heeeeeeeee eh ekwebw wnbe wew w eje e";
    ptr = fopen("c51.txt", "w");
    fprintf(ptr , "%s" , string);

    return 0;
}