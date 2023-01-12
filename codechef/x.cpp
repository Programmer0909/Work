#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, a, b, ct = 0, res = 0, max = 0, min = 0;
    cin >> n >> a >> b;
    string s;
    if (n == a == b)
    {
        cout << "YES" el;
        return 0;
    }
    cout << "Ghanta" el;
    ((a + b) <= (n - 2)) ? cout << "YES" el : cout << "NO" el;
    return 0;
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