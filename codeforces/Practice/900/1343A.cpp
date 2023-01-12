#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, k = 3, x = 0, res = 2, max = 0, min = 0;
    cin >> n;
    string s;
    while (k<=n)
    {
        if (n%k==0)
        {
            cout << n/k el;
            return 0;
        }
        res*=2;
        k+=res;
    }
    
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--) ch();
    return 0;
}