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
    int arr[n+1];
    for (int i = 1; i <= n; i++) cin>>arr[i];
    for (int i = 1; i <=n; i++)
    {
        int ct=1 , fi = arr[i];
        while (fi!=i)
        {
            ct++;
            fi=arr[fi];
        }
        cout << ct << " ";
    }
    cout << endl;

    
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