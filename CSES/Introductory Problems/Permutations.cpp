#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, max = 0, min = 0;
    cin >> n;
    string s;
    if(n==1) {cout << 1 ; return 0;}
    if(n<4) cout << "NO SOLUTION";
    else {
        for (int j = 2; j <=n; j+=2) cout << j << " ";
        for (int i = 1; i <= n; i+=2) cout << i << " ";}
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); ch();
    return 0;
}