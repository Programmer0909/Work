#include <bits/stdc++.h>
using namespace std;

// AIM :

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}

 int main()
{
    /*
    int n, m, max;
    cin >> n >> m;
    if (m%n==0)
    {
        cout<<n;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (m % i == 0)
            {
                max = i;
            }
        }
    }
    cout<<endl<<max;
    */

    // Euclid approach

    /*
    int n, m;
    cin >> n >> m;
    while (n != m)
    {
        if (n > m)
        {
            n = n - m;
        }
        else
        {
            m = m - n;
        }
    }
    cout << n;
    */

    // Optimised euclid approach

    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);

    return 0;
}
