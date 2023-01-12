#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int dp[n + 1] = {0}, arr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    dp[2] = dp[1] + abs(arr[2] - arr[1]);
    for (int i = 3; i <= n; i++)
    {
        int ans = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (i - j > 0)
            {
                ans = min(ans, dp[i - j] + abs(arr[i] - arr[i - j]));
            }
        }
        dp[i] = ans;
        // dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }
    cout << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << dp[i] <<" ";
    // }
    
    cout << dp[n] << endl;
    return 0;
}