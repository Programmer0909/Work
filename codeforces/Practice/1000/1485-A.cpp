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
    if(n%2==0){
        // cout << 1 << " ";
        // for (int i = 2; i <=n; i++)
        // {
        //     (i%2!=0)?(cout << ceil(i/2.0) << " "):(cout << -1*ceil(i/2.0) +1 << " ");
        // }
        for (int i = 1; i <=n/2; i++)
        {
            (i%2==0)?(cout << -1*i << " "):(cout << i << " ");
        }
        for (int i = n/2; i >0; i--)
        {
            (i%2==0)?(cout << i << " "):(cout << -1*i << " ");
        }
        
        cout << endl;
        return 0;
    }
    cout << -1 << endl;
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