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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            ct1++;
        else
            ct2++;
    }
    if (ct1 <= ct2)
    {
        cout << ct1;
    }
    else if (ct1 > ct2)
    {
        int res = 0;
        res += ct2;
        ct1 -= ct2;
        res += (ct1 / 3);
        cout << res;
    }

    return 0;
}