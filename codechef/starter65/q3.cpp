#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    unsigned int n, m = 0, k = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n >> m >> k >> x;
    res = (k)*n + m;
    // cout << res el;
    ct=res;
    if (x <= (k - 1) * n)
    {
        cout << "NO" el;
    }
    else
    {
        y = x % res;
        // cout << y el;
        (y < ((k - 1) * n)) ? (cout << "NO" el) : (cout << "YES" el);
    }

    // while (res<x)
    // {
    //     c++;
    //     if(k%c!=0){
    //         res+=n;
    //     }
    //     else
    //     {
    //         res+=(n+m);
    //     }
        
    // }
    // (c%k==0) ? (cout << "YES" el):(cout << "NO" el);
    
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

