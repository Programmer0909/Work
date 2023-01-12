#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n,a=0,b=0,c=0,x=0,y=0,z=0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') res=max(res,max(s.length()-i,i+1)),ct++;
        if(s[s.length()-1]=='1') {cout << 2*s.length() << endl;return 0;}
    }
    if(ct==0) {cout << s.length() << endl;return 0;}
    cout << 2*res << endl;
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
    while (t--) ch();
    return 0;
}