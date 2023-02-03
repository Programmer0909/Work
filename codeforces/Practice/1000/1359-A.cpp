#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector< int>
#define mi map< int,  int>
#define vii vector< int,  int>
#define el << endl
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
int ch()
{
    int n,m,k,res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n >> m >>k;
    int t = n/k;
    if(t>=m) cout << m << endl;
    else
    {
        if((t + (t-1)*(k-1)) < m) cout << 0 << endl;
        else cout << t - ceil(((m-t)*1.0)/(k-1)) << endl;
    }
    
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast
    int t; cin >> t;
   
    while (t--) ch();
    return 0;
}