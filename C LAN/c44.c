#include <stdio.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/
struct aggency{
    char name[100];
    char lic_no[100];
    char route[100];
    int kms;
} d1,d2,d3;



int main()
{
    
    gets(d1.name);
    gets(d1.lic_no);
    gets(d1.route);
    scanf("%d\n" , d1.kms);

    gets(d2.name);
    gets(d2.lic_no);
    gets(d2.route);
    scanf("%d\n" , d2.kms);

    gets(d3.name);
    gets(d3.lic_no);
    gets(d3.route);
    scanf("%d\n" , d3.kms);





    return 0;
    
}