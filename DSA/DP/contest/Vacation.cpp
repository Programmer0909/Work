#include <bits/stdc++.h>
using namespace std;
int sol(int n, int arr[][3])
{
    int dp[n + 1][3] = {0};
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = arr[i][0];
        dp[i][1] = arr[i][1];
        dp[i][2] = arr[i][2];
    }
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = arr[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = arr[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = arr[i][2] + max(dp[i - 1][0], dp[i - 1][1]);
    }
    return max(dp[n][0], max(dp[n][1], dp[n][2]));
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1][3] = {0};
    for (int i = 1; i <= n; i++)
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    cout << sol(n, arr);
    return 0;
}