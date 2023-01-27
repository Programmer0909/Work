#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int h_d = INT_MIN, h_n = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        h_d = max(h_d, arr[i] - arr[i - 1]);
    }
    // cout << h_d << endl;
    for (int i = 2; i < n; i++)
    {
        h_n = min(h_n, arr[i] - arr[i - 2]);
        // cout << h_n << endl;
    }
    cout << max(h_n,h_d) << endl;
    return 0;
}