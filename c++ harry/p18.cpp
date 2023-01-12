#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

//AIM : SYNTAX FOR DEFINING FUNCTION OUTSIDE THE CLASS



template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
    
};

template <class T>
void Harry<T> :: display(){
    cout<<data;
}

int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}