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
    ll unsigned int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) res *= arr[i];
    cout << res % 998244353998244353 << endl;
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