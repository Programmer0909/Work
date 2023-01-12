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
    ll int n,m ,ct = 0;
    cin >> n >> m;
    if(n%2==0) ct=n/2;
    else ct=n/2+1;
    if(ct%m==0){
            cout << ct el;
            return 0;
    }
    while (ct<n)
    {
        ct++;
        if(ct%m==0){
            cout << ct el;
            return 0;
        }
    }
    cout << -1 el;
    return 0;
}