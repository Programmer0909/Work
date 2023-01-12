#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
        ll int n, q, sum = 0, cte = 0;
        cin >> n >> q;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            if (a % 2 == 0)
            {
                cte++;
            }
        }
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a == 0)
            {
                sum += (b * cte);
                if (b%2!=0)
                {
                    cte=0;
                }
                
            }
            else
            {
                sum += (b * (n - cte));
                if (b%2!=0)
                {
                    cte=n;
                }
            }
            cout << sum el;
        }
    }
    return 0;
}