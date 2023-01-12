#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,ctz=0,cto=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++) (s[i]=='0')?(ctz++):(cto++);
    if(cto>0) {cout <<1;for (int i = 0; i < ctz; i++) cout << 0;}
    else cout <<0;
    return 0;
}