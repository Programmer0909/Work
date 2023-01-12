#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = 0, ct = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            ct++;
        }
        else
        {
            ct--;
        }
        if (ct == 0)
        {
            res = i;
            ct = 1;
        }
    }
    ct=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            ct++;
        }
    }
    if (ct >= n / 2)
    {
        cout << res;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}