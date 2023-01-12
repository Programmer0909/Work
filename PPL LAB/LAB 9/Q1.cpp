#include <bits/stdc++.h>
using namespace std;
class employee
{
    double salary;
    int hours;
public:
    void addinfo(double s, int h)
    {
        salary = s;
        hours = h;
    }
    void addsal()
    {
        if (salary <= 500)
            salary += 10;
    }
    void addwork()
    {
        if (hours >= 6)
            salary += 5;
    }
    void sal() { cout << "The salary of this employee is : " << salary << "$" << endl; }
};
int main()
{
    employee E;
    cout << "Enter salary and total work hours of employee : ";
    double s;
    int h;
    cin >> s >> h;
    E.addinfo(s, h);
    E.addsal();
    E.addwork();
    E.sal();
    return 0;
}