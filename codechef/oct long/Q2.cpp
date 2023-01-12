#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        long long int res = 1;
        for (int i = 1; i < s.length(); i++){
            if (s[i] != s[i - 1]) res *= 2;
            if (s[i] != s[i - 1] && (s[i + 1] != s[i])) res -= 1;}
        cout << res % 998244353 << endl;}
    return 0;}