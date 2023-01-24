#include <bits/stdc++.h>
using namespace std;

int sol(int n, int ld)
{
    if (n == 0)
        return 1;
    // int ans = 0;
    if (ld == 0)
        return (sol(n - 1, 0) + sol(n - 1, 1));
    else
        return sol(n - 1, 0);

    // return ans;
}

// AIM :
int main()
{
    // cout << sol(2 , 0) + sol(2 , 1) << endl;
    int n;cin >> n;
    int dp[n + 1][2];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j < 2; j++)
            dp[i][j] = 0;
    dp[0][1] = 1;
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i-1][0];
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    cout << dp[n - 1][0] + dp[n - 1][1] << endl;
    return 0;
}