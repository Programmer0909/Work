for (int j = 0; j < n; j++)
{
    for (int i = j; i >= 0; i--)
    {
        dp[i][j] = 1e9;
        if (i == j)
        {
            dp[i][j] = 0;
            continue;
        }
        if (v[i] == v[j] && j > i + 1)
        {
            dp[i][j] = 1 + dp[i + 1][j - 1];
        }
        else
        {
            dp[i][j] = min({dp[i][j], dp[i + 1][j] + 1, dp[i][j - 1] + 1});
        }
    }
}