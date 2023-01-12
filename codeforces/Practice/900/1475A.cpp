#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    unsigned ll int n, ct = 0;
    cin >> n;
    while (n>1)
    {
        if (n % 2 != 0)
        {
            cout << "YES" el;
            return 0;
        }
        n /= 2;
    }
    cout << "NO" el;
    return 1;
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
    {
        ch();
    }

    return 0;
}