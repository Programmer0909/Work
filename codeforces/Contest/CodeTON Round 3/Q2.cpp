#include <bits/stdc++.h>
using namespace std;

void check()
{
    long long int n, ct_1 = 0, res_1 = 0, ct_0 = 0, res_0 = 0;
    cin >> n;
    // int arr[n];
    string s;
    cin >> s;
    int ct=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            ct_1++;
            res_1 = max(ct_1, res_1);
        }
        else
        {
            ct_1 = 0;
        }

        if (s[i] == '0')
        {

            ct_0++;
            res_0 = max(ct_0, res_0);
        }
        else
        {
            ct_0 = 0;
        }
        if(s[i]=='1') ct++ ;
    }
    // cout << ct << endl;
    // cout << res_1 << endl;
    // cout << res_0 << endl;
    cout << max(res_1 * res_1, max(res_0 * res_0, ct * (n-ct))) << endl;
}

// AIM :
int main()
{
    int n;
    cin >> n;
    while (n--)
        check();
    return 0;
}