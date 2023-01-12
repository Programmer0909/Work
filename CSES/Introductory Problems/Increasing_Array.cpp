#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, prev = 0, curr = 0;
    cin >> n;
    string s;
    cin >> prev;
    n-=1;
    while(n--){
        cin >> curr;
        if(prev-curr>0) res+=(prev-curr);
        else prev=curr;
        // cout << prev << " ";
    }
    cout << endl << res ;
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