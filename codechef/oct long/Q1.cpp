#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ch(string s, int n){
    int ct=0;
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='1')  ct++;
        if (ct==2){
            cout << i << endl;
            return 0;}}
    cout << n << endl;
    return 1;}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ch(s,n);}
    return 0;}