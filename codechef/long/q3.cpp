#include <bits/stdc++.h>
using namespace std;

// AIM :

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        int x, y;
        x = max(a, b);
        y = min(a, b);
        if (x % y == 0)
        {
            int t = x / y;
            if (isPowerOfTwo(t))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
