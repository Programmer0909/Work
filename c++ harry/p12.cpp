#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

//AIM : Array of object

class complex
{
    int r, i;

public:
    void setdata (int a, int b)
    {
        r = a;
        i = b;
    }
    void getdata(void)
    {
        cout << r << " + i" << i << endl;
    }
};



int main(){
    complex *ptr = new complex[4];
    int p,q;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter number "<<endl;
        cin>>p>>q;
        (i+ptr)->setdata(p,q);
        (i+ptr)->getdata();

    }
    
    return 0;
}