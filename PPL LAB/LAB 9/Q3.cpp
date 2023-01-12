#include <bits/stdc++.h>
using namespace std;

// AIM : 3. Write a complete program to calculate the volume of the cube,
//   rectangular box, and cylinder using function overloading.

float volume(float side)
{
    return side * side * side;
}
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}
float volume(float height, float radius)
{
    return 3.14 * height * radius;
}

int main()
{
    int ch;
    cout << "Who's volume do you want to calculate : " << endl
         << "1. Cube" << endl
         << "2. Rectangular box " << endl
         << "3.Cyllinder" << endl;
    cin >> ch;
    if (ch == 1)
    {
        float s;
        cout << "Enter side length : ";
        cin >> s;
        cout << "Volume is : " << volume(s);
    }
    else if (ch == 2)
    {
        float l, b, h;
        cout << "Enter length , breadth and height : ";
        cin >> l >> b >> h;
        cout << "Volume is : " << volume(l,b,h);
    }
    else if (ch == 3)
    {
        float r, h;
        cout << "Enter radius and heigth : ";
        cin >> r >> h;
        cout << "Volume is : " << volume(r,h);
    }
    else
    {
        cout << "Wrong input" << endl;
    }

    return 0;
}