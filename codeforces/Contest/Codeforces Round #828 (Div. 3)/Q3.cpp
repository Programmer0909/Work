#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, tr = 0, tg = 0, res = 0;
        bool red = false, green = false;
        char c;
        string s;
        cin >> n >> c >> s;
        if (c=='g')
        {
            cout << 0 el;
            continue;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c && red==false)
            {
                tr = i;
                red = true;
            }
            else if (s[i] == 'g')
            {
                if (green == false)
                {
                    tg = i;
                    green = true;
                }
                if (red == true)
                {
                    res = max(res, (i - tr));
                    red = false;
                }
            }
        }
        if (red == true)
        {
            res = max(res, (n - tr + tg));
        }
        cout << res el;
    }
    return 0;
}