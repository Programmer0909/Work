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
    int n,a,b,c,d;
    string s;
    cin >> n >> a >> b >> c >> d;
    int a_min = a-b , a_max = a+b , c_min= c-d , c_max = c+d;
    if(n*a_min > c_max || n*a_max<c_min) cout << "NO"  << endl;

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