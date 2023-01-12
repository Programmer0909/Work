#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,s="";
    cin >> n;
    vector<int> v;
    int ct=0;
    for (int i = 0; i<n.length(); i++){
        if (n[i]=='+') ct++;
        else v.push_back(n[i]); }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++){
        s+=v[i];
        if(ct) s+='+';
        ct--;}
    cout << s;
    return 0;}