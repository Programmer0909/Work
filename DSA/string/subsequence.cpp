#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    string n , s;
    bool flag = false;
    cin>>n >> s;
    int j=0;
    // unordered_set <char> si;
    for (int i = 0; i < n.length(); i++){
        if (n[i]==s[j] && j<s.size()) j++;
        if (j==s.size()) {flag=true; break;}}
    (flag)?(cout << "Yes" << endl):(cout <<"No"<<endl);
    return 0;
}