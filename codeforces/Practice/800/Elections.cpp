#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
#define rou(x) std::cout << std::fixed << std::setprecision(x);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int n;
    double ct = 0;
    int maxi = INT16_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ct += (2*(arr[i]));
        maxi = max(maxi, arr[i]);
    }
    // cout << ct;
    int f = (ct/n);
    // cout << f;
    cout << max(f+1,maxi);
    return 0;
}