#include <iostream>
#include <math.h>
using namespace std;

// AIM :

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    };
    void pri(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    };
    friend double dist(point, point);
};

double dist(point p, point q)
{
    double w,r;
    w=(p.x)- (q.x);
    r=(p.y)- (q.y);
    return sqrt(w*w + r*r);
}

int main()
{

    point p(0, 1);
    p.pri();

    point q(0, 6);
    q.pri();

    cout << dist(p, q);
    return 0;
}