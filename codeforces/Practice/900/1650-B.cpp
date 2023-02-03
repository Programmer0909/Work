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
    int n,l,r,k,res = 0, maxi = 0, mini = 0;
    string s;
    cin >> l >> r >> k;
    if(r%k==0)  cout << max(((r-1)/k + (r-1)%k) , r/k + r%k) << endl;
    else
    {
        int j = (r-r%k-1);
        int a = (j / k) + (j%k);
        int b = r/k + r%k;
        // cout << max( , max(l,)) << endl;
        if(j>=l && j<=r) cout << max(a,b) << endl;
        else cout << b << endl;
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