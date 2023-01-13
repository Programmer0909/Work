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
    int n, a, res = 0, maxi = 0, mini = INT_MAX;
    string s;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mini = min(mini, arr[i]);
        if (arr[i] > mini)
            cout << mini el , cout << arr[i] el , res = 1 ,cout el;
    }
    (res == 1) ? (cout << "NO" el) : (cout << "YES" el);
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