#include <bits/stdc++.h>
using namespace std;
// #define long long ll;
// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        long long int res = 0, base = x;
        while (base <= y)
            base *= 10;
        base /= 10;
        // cout << base << "     JK" << endl;
        while (base >x )
        {
            res += (y / base);
            y = y % base;
            base /= 10;
        }
        // cout << "Y is " << y <<" and base is "<< base << endl;
        // cout << ceil((float)y/base) << "            hjjjjjjjjj" << endl;
        // res=res+ceil((float)y/base);
        res= res + (y/base) + y%base;
        cout << res << endl;
    }

    return 0;
}