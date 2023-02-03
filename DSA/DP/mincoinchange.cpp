// #include <bits/stdc++.h>
// using namespace std;

// // AIM : https://practice.geeksforgeeks.org/problems/number-of-coins1824/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// int dp[100000] = {INT_MAX};
// int minCoins(int coins[], int M, int V)
// {
//     // if (V == 0)
//     //     return 0;
//     // if (dp[V] != 0)
//     //     return dp[V];
//     // int ans = INT_MAX;
//     // for (int i = 0; i < M; i++)
//     // {
//     //     if (V - coins[i] >= 0)
//     //     {
//     //         ans = min(ans, 1 + minCoins(coins, M, V - coins[i]));
//     //     }
//     // }
//     // return dp[V - 1] = ans;
//     if (V == 1)
//         return 1;
//     if (dp[V] != INT_MAX)
//         return dp[V];
//     int ans = INT_MAX;
//     for (int i = 0; i < M; i++)
//         if (V - coins[i] >= 0)
//             ans = min(ans, 1 + minCoins(coins, M, V - coins[i]));
//     dp[V - 1] = ans;
//     return dp[V - 1];
// }

// int main()
// {
//     int coins[8] = {9, 2, 11, 5, 14, 17, 8, 18};
//     cout << minCoins(coins, 8, 39);
//     for (int i = 1; i < 40; i++)
//         cout << dp[i] << "\n";
//     return 0;
// }

#include <iostream>

using namespace std;

int dp[1005];
int count(int S[], int m, int n)
{
    dp[0] = 1;
    // for (int i = 0; i < m; i++)
    //     for (int j = S[i]; j <= n; j++)
    //         dp[j] += dp[j - S[i]];
    for (int i = 0; i < m; i++)
    {
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
    return dp[n];
}

int main()
{
    int val[1005];
    // freopen("test.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < M; ++i)
        scanf("%lld", &val[i]);
    cout << count(val, M, N);
    return 0;
}
