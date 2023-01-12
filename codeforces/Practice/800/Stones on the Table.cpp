#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ct=0;
    cin>>n;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++) if (s[i]==s[i-1]) ct++;
    cout << ct;
    return 0;}