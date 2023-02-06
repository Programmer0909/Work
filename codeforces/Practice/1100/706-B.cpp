#include <bits/stdc++.h>
using namespace std;
#define int long long 
int dp[100002] ;
// AIM :

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 100002; i++)
    {
        dp[i]=0;
    }
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl << endl;
    int maxi = *max_element(arr, arr + n);
    int j = 0;
    for (int i = 1; i <= 100001; i++)
    {
        if (i == arr[j])
            dp[i] = dp[i - 1] + 1, j++;
        else
            dp[i] = dp[i - 1];
    }
    for (int i = 0; i <= 150; i++)
    {
      cout << dp[i] << " ";
    }
    // cout << endl << endl;
    vector <int> v;
    int q;
    cin >> q;
    cout << dp[0] << " " << "FJ" << endl;
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t >= maxi)
        {
            v.push_back(dp[100001]);
            // continue;
        }
        else v.push_back(dp[t]);
    }
    for(auto p : v) cout << p << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int dp[100002];
// // AIM :
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         dp[i]=0;
//     }
    
    
//     cout << endl << endl;
//     sort(arr, arr + n);
//     int maxi = *max_element(arr, arr + n);
//     int j = 0;
//     for (int i = 1; i <= 100001; i++)
//     {
//         if (i == arr[j])
//             dp[i] = dp[i - 1] + 1, j++;
//         else
//             dp[i] = dp[i - 1];
//     }
//     for (int i = 0; i < 10000; i++)
//     {
//       cout << dp[i] << " ";
//     }
//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++)
//     {
//         unsigned long long int t;
//         cin >> t;
//         if (t >= 100001)
//         {
//             cout << dp[100001] << endl;
//             continue;
//         }
//         cout << dp[t] << endl;
//     }

//     return 0;
// }