#include <iostream>
#include <math.h>
using namespace std;

// AIM : Constructer overloading

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnum(void)
    {
        cout << "The number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1;
    c1.printnum();

    complex c2(5);
    c2.printnum();

    complex c3(3, 5);
    c3.printnum();

    return 0;
}