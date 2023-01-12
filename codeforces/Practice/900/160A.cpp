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
    ll int n, ct = 0;
    float sum = 0;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    sort(v.begin(), v.end(), greater<ll int>());
    sum = sum / 2;
    for (int i = 0; i < v.size(); i++)
    {
        if (sum >= 0)
        {
            sum -= v[i];
            ct++;
        }
        if (sum<0)
        {
            break;
        }
        
    }
    cout << ct;
    return 0;
}