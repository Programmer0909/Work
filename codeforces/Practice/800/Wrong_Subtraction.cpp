#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, k, ct = 0;
    cin >> n >> k;
    while (k > 0)
    {
        if (n % 10 == 0 && k != 0)
        {
            // cout << "n is " << n << " k is " << k el;
            n /= 10;
            k--;
        }
        else
        {
            n--;
            k--;
        }
        // cout << "n is " << n << "  k is " << k el;
    }
    cout << n;
    return 0;
}