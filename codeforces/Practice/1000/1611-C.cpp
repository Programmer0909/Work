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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
      maxi=max(arr[i],maxi);
    }
    // vector <int> q;
    // q.
    if(maxi!=arr[0] && maxi!=arr[n-1]) {cout << -1 << endl;return 0;}
    int i = 0 , j = n-1;
    // while (i<(n/2) && j>(n/2))
    // {
    //     if(arr[i]<arr[j]) swap(arr[i],arr[i+1]) , i++;
    //     else swap(arr[j],arr[j-1]) , j--; 
    // }
    // while (i<(n/2))
    // {
    //     swap(arr[i],arr[i+1]) , i++;
        
    // }
    // while (j>(n/2))
    // {
    //      swap(arr[j],arr[j-1]) , j--; 

    // }
    
    for (int i = n-1; i >=0; i--)
    {
      cout << arr[i] << " ";
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