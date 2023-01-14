#include <bits/stdc++.h>
using namespace std;
int arr[5] = {2, 3, 5};
int dp[10][10];
// int sol(int y, int beg, int end)
// {
//     if (beg == end)
//         return arr[beg] * y;
//     if (dp[beg][end] != 0)
//         return dp[beg][end];
//     int ans = max(arr[beg] * y + sol(y + 1, beg + 1, end),
//                   arr[end] * y + sol(y + 1, beg, end - 1));
//     return dp[beg][end] = ans;
// }
int main()
{
    // cout << sol(1, 0, 4) << endl;

    int y = 3;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            dp[i][j] = 0;
    for (int i = 1; i <= 3; i++)
        dp[i][i] = arr[i-1] * 3;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
            cout << dp[i][j] << "   ";
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if(i<j) dp[i][j] = max(dp[i][j - 1] + arr[j-1] * (y - 1), dp[i - 1][j] + arr[i-1] * (y - 1));
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
            cout << dp[i][j] << "   ";
        cout << endl;
    }
    return 0;
}