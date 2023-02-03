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
int ch()
{
    unsigned int n, a, b, c, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> a >> b >> c;
    if (a % 2 == 0)
        res++;
    if (b % 2 == 0)
        res++;
    if (c % 2 == 0)
        res++;
    if ((a % 2 == 0 && c % 2 != 0 || a % 2 != 0 && c % 2 == 0) && (res != 2))
    {
        cout << "NO" << endl;
        return 0;
    }

    unsigned int p = (a + c) / 2;
    // if((2*p)!=(a+c)){
    //     cout << "NO" << endl;
    //     return 0;
    // }
    if (b == p)
        cout << "YES" << endl;
    else if (p < b)
    {
        b *= 2;
        // cout << a << b << c ;
        if (((b - a) % c == 0 || (b - c) % a == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        (p % b == 0) ? (cout << "YES" << endl) : (cout << "NO" << endl);
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