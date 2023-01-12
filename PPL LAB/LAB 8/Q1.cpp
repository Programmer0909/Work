#include <bits/stdc++.h>
using namespace std;
class cyllinder
{
    float rad, height;

public:
    cyllinder(float r, float h)
    {
        rad = r;
        height = h;
    }
    void area()
    {
        cout << "The area of cyllider with radius " << rad << " and height " << height << " is : " << endl;
        cout << 2 * 3.14 * rad * (rad + height) << endl;
    }
    void volume()
    {
        cout << "The volume of cyllider with radius " << rad << " and height " << height << " is : " << endl;
        cout << 3.14 * rad * rad * height << endl;
    }
};
int main()
{
    float r, h;
    cout << "Enter the radius and heigth of the cyllinder : ";
    cin >> r >> h;
    cyllinder c(r, h);
    c.area();
    c.volume();
    return 0;
}