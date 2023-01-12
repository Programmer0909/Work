#include <bits/stdc++.h>
using namespace std;
string andmandkadola(string res , string ck){
    string temp="";
    for (int i = 0; i < res.length(); i++){
        if (res[i]==ck[i]) temp+=res[i];
        else return temp;}}
int main(){
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    string res=arr[0];
    for (int i = 1; i < n; i++) res=andmandkadola(res,arr[i]);
    cout << res.length();
    return 0;}