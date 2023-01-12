#include <bits/stdc++.h>
using namespace std;

// AIM : https://practice.geeksforgeeks.org/problems/minimum-steps-to-minimize-n-as-per-given-condition0618/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

int dp[10000] = {0};
int minSteps(int n)
{
    // if (n == 1)
    //     return 0;
    // if (n == 2)
    //     return 1;
    // if (n == 3)
    //     return 1;
    // if (dp[n] != 0)
    //     return dp[n];
    // int t1 = INT_MAX, t2 = INT_MAX, t3 = INT_MAX;
    // if (n % 3 == 0)
    //     t1 = minSteps(n / 3);
    // if (n % 2 == 0)
    //     t2 = minSteps(n / 2);
    // t3 = minSteps(n - 1);
    // int ans = 1 + min(t1, min(t2, t3));
    // return dp[n] = ans;

    if (n == 2 )
    {
        return 1;
    }
    if (n == 3 )
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        int t1 = INT_MAX;
        int t2 = INT_MAX;
        int t3 = INT_MAX;

        if (n % 2 == 0)
        {
            t1 = minSteps(n / 2)+1;
        }
        if (n % 3 == 0)
        {
            t2 = minSteps(n / 3)+1;
        }
        t3 = minSteps(n - 1) +1;

        int ans = min(t1, min(t2, t3));
        return dp[n] = ans;
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << endl;
    return 0;
}
