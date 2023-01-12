#include <stdio.h>

/* AIM   : SASTA BANK
   DATE  : 21/01/2022
   AUTHOR: PRATHAM PALI
*/

int fi(int princ, int roi, int timer, int p)
{
    int pir;
    pir = (princ * (1 + roi / p) ^ (p * timer)) - princ;

    return pir;
}

int simint(int princ, int roi, int timer)
{
    int amt;
    amt = (princ * roi * timer) / 100;
    printf("TOTAL SIMPLE INTEREST IS : %d", amt);
}

int comint(int princ, int roi, int timer)
{
    int resa, ressa, resq, resm, resd;
    resa = fi(princ, roi, timer, 1);
    ressa = fi(princ, roi, timer, 2);
    resq = fi(princ, roi, timer, 4);
    resm = fi(princ, roi, timer, 12);
    resd = fi(princ, roi, timer, 365);
    printf("%d", resa);
    printf("%d", ressa);
    printf("%d", resq);
    printf("%d", resm);
    printf("%d", resd);
}

int main()
{
    int pric, roi, timer;
    printf("No dena shhuru kareee\n");
    scanf("%d", &timer);
    printf("No dena shhuru kar p\n");
    scanf("%d", &pric);
    printf("No dena shhuru kar\n");
    scanf("%d", &roi);

    simint(pric, roi, timer);
    comint(pric, roi, timer);

    return 0;
}
