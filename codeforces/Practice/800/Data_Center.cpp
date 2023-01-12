#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, a, b, p, mini = INT_MAX, x;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = i;
            b = (n / i);
        }
        p = (2 * (a + b));
        mini = min(p, mini);
    }
    cout << mini;

    return 0;
}