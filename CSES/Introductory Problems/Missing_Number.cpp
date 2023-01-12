#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll unsigned int n, ct = 0, res = 0, max = 0, min = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n-1; i++)
    {
        cin >> ct;
        // cout << ct << " ";
        res += ct;
        // cout << res << " ";
    }
    cout << ((n * (n + 1)) / 2) - res;
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ch();
    return 0;
}