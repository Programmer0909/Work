#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
int ch()
{
    int n,k,res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n>>k;
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
      temp[i]=arr[i];
    }
    map<int,int> m;
    sort(temp,temp+n);
    for (int i = 0; i < n-1; i++)
    {
        m[temp[i]]=temp[i+1];
    }
    m[temp[n-1]]=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(m[arr[i]]!=arr[i+1]) res++;
        // else 
    }
    if(res<=k) cout << "YES" << endl;
    else cout << "NO" << endl;
    // cout << res << endl;
    
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