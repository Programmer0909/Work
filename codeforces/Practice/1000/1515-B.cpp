#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    // if (n==2)
    // {
    //     cout << "YES"
    // }

    if (n % 2 == 0)
    {
        if (ceil((double)sqrt(n / 2)) == floor((double)sqrt(n / 2)))
        {
            cout << "YES" el;
            return 0;
        }
        else if (ceil((double)sqrt(n / 4)) == floor((double)sqrt(n / 4)) && n%4==0)
        {
            cout << "YES" el;
            return 0;
        }

        else
        {
            cout << "NO" el;
        }
    }
    else
    {
        cout << "NO" el;
    }

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