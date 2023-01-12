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
    ll int m, f, ct = 0;
    cin >> m >> f;
    while (m >= 0 && f >= 0)
    {
        ct++;
        (ct % 2 != 0) ? (m -= ct) : (f -= ct);
    }
    if (m < 0)
        cout << "Vladik";
    else
        cout << "Valera";
    return 0;
}