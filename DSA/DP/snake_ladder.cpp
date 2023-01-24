#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n + 1] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        cout << dp[n] << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int ans = dp[i];
        cout << ans << endl;
        if (arr[i] == 0)
            for (int j = i + 1; j >= max(0, k - i); j--)
                ans += dp[j];
        cout << "ans : " <<  ans << " " << i << endl;
        dp[i] = ans;
        cout << "dp : " << dp[i] << " " << i << endl;
        
    }
    cout <<dp[n-1] << endl;
    // for (int i = 1; i <= n; i++)
    //     cout << dp[n] << endl;
    return 0;
}

// #include <bits/stdc++.h>
// #define ff first
// #define se second
// #define pb push_back
// #define nn 6000
// #define mt make_tuple
// #define mp make_pair
// #define ll long long int
// #define db double
// #define ldb long double
// #define inf 1000000000000000000ll
// #define logn 20
// #define mod 1000000007ll
// #define mod1 mod
// #define mod2 100000009ll
// #define sqr(a) a * 1ll * a
// #define nullp mp(-1, -1)
// #define set0(a) memset(a, 0, sizeof a)
// #define init(a) memset(a, -1, sizeof a)
// #define cmp 1e-16

// using namespace std;

// ll dp[nn];
// bool a[nn];

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, k;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     dp[0] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         dp[i] = 0;
//         int ans = 0;
//         if (a[i] == 0)
//             for (int j = i - 1; j >= max(0, i - k); j--)
//                 ans+= dp[j];
//         dp[i]=ans;
//     }
//     cout << dp[n - 1] << endl;
//     return 0;
// }