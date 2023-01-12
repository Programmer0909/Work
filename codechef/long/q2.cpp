#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a <= 100)
        {
            cout << a << endl;
        }
        else if (a <= 1000)
        {
            cout << a - 25 << endl;
        }
        else if (a <= 5000)
        {
            cout << a - 100 << endl;
        }
        else
        {
            cout << a - 500 << endl;
        }
    }

    return 0;
}