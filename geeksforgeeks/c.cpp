#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = INT16_MAX, max = 0, min = 0;
    cin >> n;
    string s;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a<=res) res=a;
        v.push_back(a);
    }
    (res==v[0])?(cout << "BOB" << endl):(cout << "Alice" << endl);
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--) ch();
    return 0;
}