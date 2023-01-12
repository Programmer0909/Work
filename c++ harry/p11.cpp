#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM : NEW AND DELETE OPERATOR
// Arrow function

class complex
{
    int r, i;

public:
    void setdata(int a, int b)
    {
        r = a;
        i = b;
    }
    void getdata(void)
    {
        cout << r << " + i" << i << endl;
    }
};

int main()
{
    /* Using NORMAL method

    complex c;
    c.setdata(5, 10);
    c.getdata();

     Using POINTER method

    complex c;
    complex *ptr = &c;
    c.setdata(5, 10);
    c.getdata();

    Using new operator

    complex *ptr = new complex;
    (*ptr).setdata(5, 10);
    (*ptr).getdata();
    delete ptr;

    */

    complex *ptr = new complex;
    (*ptr).setdata(5, 10);
    // (*ptr).getdata();  == ptr->getdata();
    ptr->getdata();
    delete ptr;
    return 0;
}