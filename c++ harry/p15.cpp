#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM : Pointer of base class and reffering to derived class
// Will have all properties of base class only

// But agar derived wale hi chahiye to virtual likh do base class ke function ke samne


class base
{
public:
    int var_base;
    void virtual display(void)
    {
        cout << "Base class called and has value " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_der=1;
    void display(void)
    {
        cout << "Base class called and has value " << var_base << endl;
        cout << "Derived  class called and has value " << var_der << endl;
    }
};

int main()
{
    base *ptr;
    derived obj;
    ptr = &obj;

    ptr->var_base = 23;
    ptr->display();
    return 0;
}