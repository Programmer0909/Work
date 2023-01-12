#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, p = 0, neg = 0;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        (arr[i] == 1) ? (p++) : (neg++);
    }
    for (int i = 0; i < m; i++)
    {
        int l, r, temp = 0;
        cin >> l >> r;
        temp = (r - l + 1);
        if ((temp) % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            p >= (temp / 2) && neg >= (temp / 2) ? (cout << 1 << endl) : (cout << 0 << endl);
        }
    }
    return 0;
}