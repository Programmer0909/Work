#include <bits/stdc++.h>
using namespace std;

// AIM :
int dp[5001][5001];
int sol(vector<int> v, int l, int r)
{
    if (dp[l][r] != -1)
        return dp[l][r];
    if (l >= r)
        return dp[l][r] = 0;
    int ans = 0;
    // if (l == r - 1)
    //     return dp[l][r] = 1;
    if (v[l] == v[r])
        return dp[l][r] = 1 + sol(v, l + 1, r - 1);
    else
        return dp[l][r] = 1 + min(sol(v, l + 1, r), sol(v, l, r - 1));
}
int main()
{
    cin.tie(0);
    memset(dp, 0, sizeof(dp));
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.resize(unique(v.begin(), v.end()) - v.begin());
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }

    // cout << sol(v, 1, v.size()) << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = j; i >= 0; i--)
    //     {
    //         dp[i][j] = 1e9;
    //         if (i == j)
    //         {
    //             dp[i][j] = 0;
    //             continue;
    //         }
    //         if (v[i] == v[j] && j > i + 1)
    //         {
    //             dp[i][j] = 1 + dp[i + 1][j - 1];
    //         }
    //         else
    //         {
    //             dp[i][j] = min({dp[i][j], dp[i + 1][j] + 1, dp[i][j - 1] + 1});
    //         }
    //     }
    // }
    // cout << dp[0][n - 1];

    for (int i = 2; i <= v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            int l = j, r = j + i - 1;
            if (l == r)
            {
                dp[l][r] = 0;
                continue;
            }

            if (v[l] == v[r] && l > r-1)
                dp[l][r] = 1 + dp[l - 1][r - 1];

            else
                dp[l][r] =  min(dp[l][r - 1]+ 1, dp[l + 1][r] + 1);
        }
    }
    cout << dp[0][v.size() - 1];

    return 0;
}

