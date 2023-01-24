#include <bits/stdc++.h>
using namespace std;
// #define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int mod = 1e9 + 7;
long mPow(long x, long y)
{
    if (x == 0)
        return 0;
    long ans = 1;

    while (y)
    {
        if (y & 1)
            ans = (ans * x) % mod;
        x = (x * x) % mod;
        y /= 2;
    }
    return ans;
}
int ch()
{
    int n, res = 0, maxi = 0, mini = 0, oo = 0, oe = 0, ee = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
            ee++;
        else if (a % 2 != 0 && b % 2 != 0)
            oo++;
        else
            oe++;
    }

    if (ee == n)
        cout << 0 << endl;

    else if (oe == 0 && oo % 2 == 0)
        cout << 0 << endl;

    else if (oe == 0 && oo % 2 != 0)
        cout << mPow(2, n) << endl;

    else
        cout << mPow(2, n - 1) << endl;

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