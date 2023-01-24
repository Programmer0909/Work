#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    int dp[n + 1];
    memset(dp, INT_MIN, sizeof dp);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            dp[j] = max(dp[j], prices[i] + dp[j - i - 1]);
    cout << dp[n] << endl;
    return 0;
}