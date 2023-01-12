#include <bits/stdc++.h>
using namespace std;
bool so(pair<string , int> &a ,pair<string,int> &b){return (a.second < b.second);}
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string s3, s4="";
    s3 = s1 + " " + s2;
    vector<pair <string, int>> v;
    for (int i = 0; i < s3.length(); i++){
        s4=s4+s3[i];
        if (s3[i] == ' ' ||  s3[i] == '.' ){   
            v.push_back(make_pair(s4,s4.length()));
            s4="";}}
    sort(v.begin(), v.end() , so);
    for (int i = 0; i < v.size(); i++) cout << v[i].first ;
    return 0;}