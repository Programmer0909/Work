#include <iostream>
#include <math.h>
using namespace std;

// AIM : EXAMPLE OF SINGLE INHERITANCE

class base
{
    int data1;

public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void)
{
    return data1;
}

int base ::getdata2(void)
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    int getdata3(void);
    void showdata()
    {
        cout << "The value of data1 is : " << getdata1() << endl;
        cout << "The value of data2 is : " << getdata2() << endl;
        cout << "The value of data3 is : " << getdata3() << endl;
    }
};

int derived ::getdata3()
{
    data3 = getdata1() * data2;
    return data3;
}

int main()
{
    derived p;
    p.setdata();
    p.getdata3();
    p.showdata();
    return 0;
}