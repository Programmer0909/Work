#include <iostream>
#include <math.h>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int, int);
    void printnum(void)
    {
        cout << "The entered num is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
};
int main()
{
    // Implicit call
    complex o(4, 6);
    o.printnum();

    // Explict call
    complex b = complex(5, 9);
    b.printnum();
    return 0;
}