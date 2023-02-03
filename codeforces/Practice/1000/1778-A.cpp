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
    bool flag1 = false , flag2=false;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
      if(arr[i]==-1) flag2=true;
      res+=arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==-1 && arr[i+1]==-1) flag1 = true;
    }
    if(flag1==true) cout << res+4 << endl;
    else if(flag2==true) cout << res+2 << endl;
    else cout << res-4 << endl;
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