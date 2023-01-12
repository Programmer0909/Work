#include <bits/stdc++.h>
using namespace std;
int ch(string s1 , string s2){
    for (int i = 0; i < s1.length(); i++){
        if (s1[i]>s2[i]) return 1;
        if (s1[i]<s2[i]) return -1;}
    return 0;}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << ch(s1,s2) ;
    return 0;}