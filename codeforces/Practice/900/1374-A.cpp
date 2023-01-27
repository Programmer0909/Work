#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int primeFactors(int n, int &x, int &y)
{
    while (n % 2 == 0)
    {
        x++;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        y++;
        n = n / 3;
    }

    if (n > 2)
        return 0;
    return 1;
}
int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    map<int, int> m;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int x = 0, y = 0;
    if (primeFactors(n, x, y))
    {
        int a = x, b = y;

        if (m.size() > 0 || a > b || b == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        cout << 2 * (b - a) + a << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}