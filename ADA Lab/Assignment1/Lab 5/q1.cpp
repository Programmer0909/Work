#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    for (int i = 0; i < n; i++)
        if (arr[i] == maxi)
            ct++;
    if (ct % 2 == 0)
        cout << "Zenyk" << endl;
    else
        cout << "Marichka" << endl;
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