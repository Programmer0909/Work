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
    int n, res = 0, maxi = 0, id = 0;
    string s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > maxi)
            maxi = arr[i], id = i;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
        if (arr[i] == maxi)
            v.push_back(i);
    if (v.size() == n)
        cout << -1 << endl;
    else
    {
        for (auto i : v)
        {
            if (i == 0 && arr[i + 1] != arr[i])
            {
                cout <<  i + 1 << endl;
                return 0;
            }
            if (i == n - 1 && arr[i - 1] != arr[i])
            {
                cout << i + 1 << endl;
                return 0;
            }
            if ((arr[i + 1] != arr[i] || arr[i - 1] != arr[i]) && i!=0 && i!=n-1)
            {
                cout <<  i + 1 << endl;
                return 0;
            }
        }
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