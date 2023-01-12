#include <iostream>
#include <math.h>
using namespace std;

// AIM :

class Employee
{
public:
    float salary;
    int id;
    Employee(){};
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
};

class programmer : public Employee
{

public:
    programmer(){};
    programmer(int inpuid)
    {
        id=inpuid;
    }

};

int main()
{
    Employee r(1),pe(2);
    cout<<r.id<<endl;
    cout<<pe.salary<<endl;
    
    programmer p(3);
    cout<<p.id<<endl;
    return 0;
}