// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// int dp[6][6];
// int pal(int l, int r, string s)
// {
//     if (l >= r)
//         return 10;
//     // if (l > r)
//     //     return false;
//     if (dp[l][r] != -5)
//         return 10;
//     return dp[l][r] = pal(l + 1, r - 1, s) && s[l] == s[r];
// }

// int main()
// {
//     string n = "abbac";
//     // cin >> n;
//     // cout << pal(0, n.length() - 1, n);
//     memset(dp,0,sizeof(dp));
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     pal(0, n.length() - 1, n);
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// #define int long long int
// #define ld long double
// #define F first
// #define S second
// #define P pair<int, int>
// #define pb push_back
// #define db(x) cout << #x << ": " << x << '\n';

// const int N = 1005;
// bool dp[N][N];

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // int t;cin>>t;while(t--)
//     {
//         int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
//         cin >> n;
//         string s;
//         cin >> s;
//         for (i = 0; i < n; i++)
//         {
//             dp[i][i] = true;
//         }
//         for (int sz = 2; sz <= n; sz++)
//         {
//             for (i = 0; i + sz - 1 < n; i++)
//             {
//                 int start = i, end = i + sz - 1;
//                 if (sz == 2)
//                 {
//                     dp[start][end] = (s[start] == s[end]);
//                 }
//                 else
//                 {
//                     dp[start][end] = (s[start] == s[end]) && (dp[start + 1][end - 1]);
//                 }
//             }
//         }
//         // queries whether l to r plaindrome ?
//         cin >> m;
//         while (m--)
//         {
//             int l, r;
//             cin >> l >> r;
//             l--;
//             r--;
//             cout << (dp[l][r] ? "YES" : "NO") << '\n';
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
void computeDP(int DP[][50], string str)
{
    int length = str.size();
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
            DP[i][j] = 0;
    }
    for (j = 1; j <= length; j++)
    {
        for (i = 0; i <= length - j; i++)
        {
            if (j <= 2)
            {
                if (str[i] == str[i + j - 1])
                    DP[i][i + j - 1] = 1;
            }
            else if (str[i] == str[i + j - 1])
                DP[i][i + j - 1] = DP[i + 1][i + j - 2];
        }
    }
}
void solveAllQueries(string str, int Q, int query[][2])
{
    int DP[50][50];
    computeDP(DP, str);
    for (int i = 0; i < Q; i++)
    {
        DP[query[i][0] - 1][query[i][1] - 1] ? cout << "not palindrome!\n" : cout << "palindrome!\n";
    }
}
int main()
{
    string str = "abccbeba";
    int Q = 3;
    int query[Q][2] = {{1, 3}, {2, 5}, {4, 5}};
    solveAllQueries(str, Q, query);
    return 0;
}