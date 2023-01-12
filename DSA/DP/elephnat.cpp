#include <bits/stdc++.h>
using namespace std;

// AIM :

int dp[100][100] = {0};
int sol(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            else
            {
                int ans = 0;
                for (int k = 1; k <= j; k++)
                {
                    ans += (dp[i][k] + dp[k][j]);
                }
                dp[i][j] = ans;
            }
        }
    }
    return dp[n][n];
}
int main()
{
    int n;
    cin >> n;
    dp[1][1] = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << sol(n) << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}