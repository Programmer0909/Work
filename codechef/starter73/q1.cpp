#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s = "";
    cin >> n >> b;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a = a | arr[i];
    }
    // a = arr[0];
    c = a ^ b;

    if (b < a)
    {
        cout << -1 el;
        return 0;
    }

    while (a > 0)
    {

        if ((((a >> 1) & 1) == 1) && (((b >> 1) & 1) == 0))
        {
            cout << -1 el;
            return 0;
        }

        a = a >> 1;
        b = b >> 1;
    }
    // for (int i = 0; i <= temp2; i++)
    // {
    //     if ((i | temp1) == temp2)
    //     {
    //         cout << i el;
    //         return 0;
    //     }
    // }

    cout << c << endl;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}