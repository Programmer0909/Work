#include <bits/stdc++.h>
using namespace std;

// AIM :

int dp[7][7] = {0};
bool mat[7][7] = {false};

void sol()
{
    vector<int> v;
    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
        {
            if (mat[i][j])
                dp[i][j] = 1 + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            else
                dp[i][j] = 0 + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    for (int i = 1; i <= 6; i++)
        for (int j = 1; j <= 6; j++)
            v.push_back(min(dp[i][j], min(dp[6][j], min(dp[i][6], 13 - ))));
    int res = INT_MIN;
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    // res = max(res, v[i]);
    // cout << res << endl;
}

int main()
{
    int n = 6;
    for (int i = 0; i < 13; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = true;
    }
    sol();
    return 0;
}