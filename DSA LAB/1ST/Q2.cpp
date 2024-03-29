#include <bits/stdc++.h>
using namespace std;



void findAge(int current_date, int current_month,
             int current_year, int birth_date,
             int birth_month, int birth_year)
{
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if (birth_date > current_date)
    {
        current_date += month[birth_month - 1];
        current_month -= 1;
    }

    
    if (birth_month > current_month)
    {
        current_year -= 1;
        current_month += 12;
    }

    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;

    // Days between dates
    // cout << "total days : " << calculated_year*365 + calculated_month*month[current_month] + calculated_date << endl;

    // 
    printf("Present Age\nYears: %d\n Months: %d\n Days:"
           " %d\n",
           calculated_year, calculated_month,
           calculated_date);
}

int main()
{
    int current_date = 7;
    int current_month = 12;
    int current_year = 2017;

    int birth_date = 16;
    int birth_month = 12;
    int birth_year = 2009;

    findAge(current_date, current_month, current_year,
            birth_date, birth_month, birth_year);
    return 0;
}

