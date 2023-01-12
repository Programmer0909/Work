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
    ll int n, ct = 0, res = 0, m, min = 0;
    cin >> n >> m;
    string s;
    signed ll int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)  cout << arr[i] << " ";
    for (int i = 0; i < m; i++) if (arr[i] < 0) res += arr[i];
    cout << abs(res);
    return 0;
}