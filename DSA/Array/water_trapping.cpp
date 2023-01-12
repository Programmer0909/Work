#include <bits/stdc++.h>
using namespace std;

// AIM : TIME : THETA (N) ; SPACE : THETA (N)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res=0;
    int lmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    int rmax[n];
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        res+=min(lmax[i],rmax[i])-arr[i];
    }
    cout << res;
    return 0;
}