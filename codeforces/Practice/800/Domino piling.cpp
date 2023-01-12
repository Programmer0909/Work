#include <bits/stdc++.h>
using namespace std;
#define long long ll;
// AIM :
int main()
{
    int t;
    cin >> t;
    int res = 0;
    while (t--)
    {
        string n;
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            if (n[i] == '+')
            {
                res++;
                break;
            }
            if (n[i] == '-')
            {
                res--;
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}