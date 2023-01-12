#include <bits/stdc++.h>
using namespace std;
int dp[3005][3005];
int lcs(string s, string t, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (dp[m][n] != -1)
        return dp[m][n];
    if (s[m - 1] == t[n - 1])
        return dp[m][n] = 1 + lcs(s, t, m - 1, n - 1);
    else
        return dp[m][n] = max(lcs(s, t, m - 1, n), lcs(s, t, m, n - 1));
}

// int lcs(string s, string t, int m, int n)
// {
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (s[i - 1] == t[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[m][n];
// }

string getopt(string &s, string &t, int n)
{
    string ans;
    int i = 0, j = 0;

    while (n > 0)
    {
        if (s[i] == t[j])
        {
            ans.push_back(s[i]);
            i++;
            j++;
            n--;
        }
        else
        {
            if (dp[i][j + 1] >=  dp[i + 1][j])
                j++;
            else
                i++;
        }
    }
    return ans;
}

// AIM :
int main()
{
    string s, t;
    cin >> s >> t;

    memset(dp, -1, sizeof(dp));
    int a = lcs(s, t, s.length(), t.length());
    cout << a << endl;

    cout << getopt(s, t, a) << endl;

    // for (int i = 0; i <= s.length(); i++)
    // {
    //     for (int j = 0; j <= t.length(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int dp[100][100];
// int lcs(string &s, string &t, int m, int n)
// {
//     if (m == 0 || n == 0)
//         return 0;

//     if (dp[n][m] != -1)
//         return dp[n][m];
//     if (s[m - 1] == t[n - 1])
//         return dp[m][n] = 1 + lcs(s, t, m - 1, n - 1);
//     // if (dp[m][n] != -1)
//     //     return dp[m][n];
//     else
//         return dp[m][n] = max(lcs(s, t, m - 1, n), lcs(s, t, m, n - 1));
// }

// // AIM :
// int main()
// {
//     string s = "AGGTAB";
//     string t = "GXTXAYB";

//     memset(dp, -1, sizeof(dp));
//     int n = s.length();
//     int m = t.length();

//     lcs(s, t, n, m);
//     for (int i = 0; i <= s.length(); i++)
//     {
//         for (int j = 0; j <= t.length(); j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << dp[n][m];

//     return 0;
// }