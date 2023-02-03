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
    int n,res = 0, maxi = 0, mini = 0;
    string s;
    cin >> s;
    bool f1 = false , f2=false;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]=='1' && s[i+1]=='1') f1=true;
        if((s[i]=='0' && s[i+1]=='0') && f1) f2=true;
    }
    if(f1 && f2) cout << "NO" << endl;
    else cout << "YES" << endl;
    
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