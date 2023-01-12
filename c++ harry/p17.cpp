#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM : TEMPLATES IN CPP

/*
    syntax:
    template <class T1,T2>
    ab jaha pe datatype specify karna hai waha pe T1,T2 likh do aur object banate 
    time specify kar do

    class_ka_naam <T1_ka_data_type , T2_ka_data_type ,.....> object_ka_naam

*/
template <class T>
class vector
{
public:
    int size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += (this->arr[i]) * (v.arr[i]);
        }
        return sum;
    }
};

int main()
{
    vector <float> v1(3); // vector 1
    v1.arr[0] = 4.9;
    v1.arr[1] = 3.9;
    v1.arr[2] = 1.9;
    vector <float> v2(3); // vector 2
    v2.arr[0] = 1.9;
    v2.arr[1] = 0.9;
    v2.arr[2] = 1.9;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}