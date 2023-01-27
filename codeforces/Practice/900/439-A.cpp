#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, d, res = 0;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res += arr[i];
    }
    if((res+(10*(n-1)))<=d) cout << (d-res)/5;
    else cout << -1;
    return 0;
}