#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll unsigned int n, ct = 1, res = 0;
    string s;
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
        if(s[i]==s[i-1]) ct++;
        else res=max(res,ct) , ct=1;
    }
    cout << res ;
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ch();
    return 0;
}