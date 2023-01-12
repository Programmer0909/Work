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
    ll int t,cm=0,ma=0;
    cin >> t;
    while (t--)
    {
        ll int a,b;
        cin >> a>>b;
        cm+=(b-a);
        ma=max(ma,cm);
    }
    cout << ma;
    return 0;
}