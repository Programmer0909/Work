#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl

int ch()
{
    int n,a=0,b=0,c=0,x=0,y=0,z=0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    vi v;
    for (int i = 1; i <=n; i++)
    {
        v.push_back(i);
    }
    cout << 2 << endl;
    while (n!=1)
    {
        int a=v[n-1];v.pop_back();
        int b=v[n-2];v.pop_back();
        cout << a << " " << b el;
        v.push_back(ceil((a+b)/2.0));
        n--;
    }
    
    
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