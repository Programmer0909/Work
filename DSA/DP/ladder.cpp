#include <bits/stdc++.h>
using namespace std;
int dp[100001] = {0};

// Bottom up approach

// void sol(int n, int k)
// {
//     dp[0] = 1;
//     for (int i = 1; i <= n; i++)
//         for (int j = 1; j <= k; j++)
//             if (i - j >= 0)
//                 dp[i] += dp[i - j];
//     cout << dp[n] << endl;
// }

// Top down approach

// int sol(int n, int k)
// {
//     if (n == 0)
//         return 1;
//     if (dp[n] != 0)
//         return dp[n];
//     int ans = 0;
//     for (int i = 1; i <= k; i++)
//         if (n - i >= 0)
//             ans += sol(n - i, k);
//     return dp[n]=ans;
// }

// Top down optimised

void sol(int n, int k)
{
    dp[0] = 1;
    for (int i = 1; i <= k; i++)
        dp[i] = 2 * dp[i - 1];
    for (int i = k + 1; i <= n; i++)
        dp[i] = 2 * dp[i - 1] + dp[i - k - 1];
    cout << dp[n] << endl;
}

int main()
{
    sol(5, 3);
    // cout << sol(5, 3) << endl;
    // for (int i = 0; i <= 4; i++)
    //     cout << dp[i] << " ";
    return 0;
}