#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, max = 0, min = 0;
    cin >> n;
    string s;
    // (n%2020==0 && n%)
    if (n > 2019)
    {
        ct = n % 2020;
        // cout << (n - (ct * 2021)) el;
        if (n >= (ct * 2021))
        {
            (((n - (ct * 2021)) % 2020) == 0) ? (cout << "YES" el) : (cout << "NO" el);
        }
        else
        {
            cout << "NO" el;
        }
    }
    else
        cout << "NO" el;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}