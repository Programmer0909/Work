#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    unsigned int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    if ((n == (n / 4 * 4)) || (n == (n / 6 * 6)))
    {
        // cout << min(n / 4, n / 6) << " ";
        // cout << n / 4 el;

        a=n/4.0; b=n/6.0;
        cout << (b) <<" "<<(a) el;
        return 0;
    }
    // if ((n == (n / 4 * 4)))
    // {
    //     cout << n / 4 << " " << n / 4 el;
    //     return 0;
    // }
    // if ((n == (n / 6 * 6)))
    // {
    //     cout << n / 6 << " " << n / 6 el;
    //     return 0;
    // }

    cout << -1 el;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}