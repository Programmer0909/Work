#include <bits/stdc++.h>
using namespace std;
int main(){
    string n, s = "";getline(cin, n);
    for (int i = 0; i < n.length(); i++)if (n[i]!=' ') s += n[i];
    if(s[s.length()-2]=='a' || s[s.length()-2]=='A' || s[s.length()-2]=='e' || s[s.length()-2]=='E' || s[s.length()-2]=='i' || s[s.length()-2]=='I' || s[s.length()-2]=='o' || s[s.length()-2]=='O' || s[s.length()-2]=='u' || s[s.length()-2]=='U' || s[s.length()-2]=='y' || s[s.length()-2]=='Y') cout << "YES";
    else cout <<"NO";return 0;}