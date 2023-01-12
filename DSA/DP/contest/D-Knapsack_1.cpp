#include <bits/stdc++.h>
using namespace std;
#define int long long int

struct item
{
    int wt;
    int val;
};
int dp[1007][100007] = {0};

// int sol(int n, int w, item arr[])
// {

//     if (n <= 0)
//         return 0;
//     if (w <= 0)
//         return 0;

//     int ans = 0;

//     if (dp[n][w] != 0)
//         return dp[n][w];
//     int temp = 0;
//     temp = sol(n - 1, w - arr[n].wt, arr) + arr[n].val;

//     ans += max(temp, sol(n - 1, w, arr));
//     // cout << ans << endl;
//     return dp[n][w] = ans;
// }

 int sol( int n,  int W, item arr[])
{
    dp[n + 1][W + 1] = {0};
    dp[1][arr[1].wt] = arr[1].val;

    for ( int i = 2; i <= n; i++)
    {
        for ( int w = 0; w <= W; w++)
        {
            dp[i][w] = dp[i - 1][w];
            if (w - arr[i].wt >= 0)
                dp[i][w] = max(dp[i][w], arr[i].val + dp[i - 1][w - arr[i].wt]);
        }
    }
     int a =  *max_element(dp[n] , dp[n] + W + 1);
    return a;
}

int32_t main()
{
    int n, w;
    cin >> n >> w;
    //  int arr[w + 1][3] = {0};
    item arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i].wt >> arr[i].val;
    // cout << "HUI" << endl;
    // cout << "HUI HUI" << endl;
    cout << sol(n, w, arr);
    // for ( int i = 0; i <= n; i++)
    // {
    //     for ( int j = 0; j <= w; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
