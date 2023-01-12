// #include <bits/stdc++.h>
// using namespace std;

// // AIM :
// string dp[3003][3000]={""};
// string lcs(string s, string t, int m, int n)
// {
//     if (m <= 0 || n <= 0)
//     {
//         return "";
//     }
//     if(dp[m][n]!="") return dp[n][m];
//     string ans = "";
//     if (s[m - 1] == t[n - 1])
//         dp[m][n]= (s[m-1] + lcs(s, t, m - 1, n - 1));
//     else
//     {
//         string t1 = "", t2 = "";
//         t1 += lcs(s, t, m - 1, n);
//         t2 += lcs(s, t, m, n - 1);
//         if (t1.length() > t2.length()) dp[m][n]= t1;
//         else
//             dp[m][n]= t2;
//         // ans+=max(lcs(s,t,m-1,n) , lcs(s,t,m,n-1));
//     }
//     // cout << 1 << ans << endl;
//     return dp[n][m]= ans;
// }

// int main()
// {
//     string s, t,m="";
//     cin >> s >> t;
//     m=lcs(s, t, s.length(), t.length());
//     // cout << ;
//     for (int i = 0; i <m.length()/2; i++)
//     {
//         swap(m[i] , m[m.length()-1-i]);
//     }
//     cout << m << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// AIM :

int dp[3003][3003] = {-1};

int lenstr(string s, string t, int m, int n)
{
    if (dp[m][n] != -1) 
        return dp[m][n];
    else
    {
        if (m <= 0 || n <= 0)
            return dp[m][n] = 0;
        int ans = 0;
        if (s[m - 1] == t[n - 1])
            dp[m][n] = (1 + lenstr(s, t, m - 1, n - 1));
        else
            dp[m][n] = max(lenstr(s, t, m - 1, n), lenstr(s, t, m, n - 1));
    }
    return dp[m][n];
}

string sol(string s, string t, int m, int n)
{
    int a = lenstr(s, t, m, n);
    cout << a << endl;
    return "";
}

int main()
{
    string s, t;
    cin >> s >> t;

    cout << lenstr(s, t, s.length(), t.length());
    return 0;
}