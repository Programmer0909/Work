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
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') res++;
        else maxi++;
    }
    if(max(res,maxi)==s.length()) cout << "NET" << endl;
    else if(min(res,maxi)%2==0) cout << "NET" << endl;
    else cout << "DA" << endl;
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