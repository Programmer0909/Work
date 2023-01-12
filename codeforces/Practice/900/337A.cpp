#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, m, ct = INT_MAX;
    cin >> n >> m;
    ll int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    
    // for (int i = 0; i < n; i++)
    // {
    //   cout << arr[i] << " ";
    // }
    for (int i = 0; i < m - n+1; i++)
    {
        // cout << arr[i + n - 1] - arr[i] el;
        ct = min(ct, arr[i + n - 1] - arr[i]);
        // cout << ct el;
    }
    cout << abs(ct);
    return 0;
}