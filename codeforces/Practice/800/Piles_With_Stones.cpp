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
    ll int n, ct1 = 0, ct2 = 0;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        ct1 += arr1[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        ct2 += arr2[i];
    }
    (ct2 <= ct1) ? (cout << "YES") : (cout << "NO");
    return 0;
}