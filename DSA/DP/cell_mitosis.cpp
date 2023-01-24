#include <bits/stdc++.h>
using namespace std;

// AIM :

int sol(int n, int x, int y, int z)
{
    int dp[n + 1] = {0};
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
        dp[i] = ((i % 2 == 0) ? (min(dp[i / 2] + x, dp[i - 1] + y)) : (min(dp[i - 1] + y, dp[(i - 1) / 2] + x + z)));
    for (int i = 0; i <= n; i++)
        cout << dp[i] << " ";
    cout << endl;
    return dp[n];
}

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout << sol(n, x, y, z);
    return 0;
}