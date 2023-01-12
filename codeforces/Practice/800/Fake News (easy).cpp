#include <bits/stdc++.h>
using namespace std; 
int main(){
    string n,s="heidi";
    cin>>n;
    int j=0;
    for (int i = 0; i < n.length(); i++){
        if (n[i]==s[j] && j<n.length()) j++;
        if (j==4){
            cout << "YES";
            break;}
        if (i==n.length()-1) cout << "NO";}
    return 0;}