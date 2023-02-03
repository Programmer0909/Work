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
    cin >> n;
    if(n>45){ cout << -1 << endl;return 0;}
    for (int i = 9; i>0; i--)
    {
        if(n>=i){n-=i;res= res*10+i;}
        if(n==0) break;
    }
    int temp = res;
    while (temp)
    {
        maxi=temp%10;
        mini=mini*10+maxi;
        temp/=10;
    }
    
    cout << mini << endl;
    
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