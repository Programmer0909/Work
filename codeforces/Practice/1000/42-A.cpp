#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n >> s;
    if (s[0] == '0')
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                res++;
            }
            else
                maxi = max(res, maxi), res = 0;
        }
        if (res != 0)
            maxi = max(res, maxi);
        cout << maxi << endl;
    }

    else
    {
        vector<int> v;
        int res = 0;
        // string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                res++;
            }
            else
                 v.push_back(res) , maxi = res, res = 0 ;
        }
        v.push_back(res);
        // if (res != 0)
        //     maxi = max(res, maxi) , v.push_back(maxi);
        // int abc = 0;
        // int i = 0;
        // // cout << "M" << maxi << endl;
        // if (maxi != n)
        // {
        //     while (s[i] != '0' && i < n)
        //     {
        //         abc++;
        //         i++;
        //     }
        // }
        // for(auto i : v) cout << i << " ";
        if(v.size()!=1) cout << v[0] + *max_element(v.begin() + 1 , v.end()) << endl;
        else cout << v[0] << endl;
    }

    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}