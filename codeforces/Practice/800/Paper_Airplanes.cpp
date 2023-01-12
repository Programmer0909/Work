#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main(){
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ct=0;
    while (ct<4){
        int cm=0;ct++;
        string s;getline(cin,s);
        for (int i = 0; i < s.length(); i++) if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') cm++;
        if(ct==1 || ct==3) if(cm!=5) {cout << "NO";return 0;}
        if(ct==2) if(cm!=7) {cout << "NO";return 0;}}cout << "YES";return 0;}