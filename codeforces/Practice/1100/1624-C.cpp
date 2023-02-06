#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
int ch()
{
    int n,res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    bool flag= true;
    int a[n+1]={0};
    bool use[n+1]={false};
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        while (x>n || use[x]) x/=2;
        if(x>0) use[x]=true;
        else flag=false;
    }
    if (flag==true)  cout << "YES" << endl;
    else cout << "NO" << endl;
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