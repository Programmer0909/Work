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
    ll int n, ct = 1, maxi = 0;
    cin >> n;
    ll int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            ct++;
        else
        {
            maxi = max(ct, maxi);
            ct = 1;
        }
    }
    maxi = max(ct, maxi);

    cout << maxi;
    return 0;
}