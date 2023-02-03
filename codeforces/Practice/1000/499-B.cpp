#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,k;
    cin>>n>>k;
    map<string , string> m;
    for (int i = 0; i < k; i++)
    {
        string a,b;
        cin >> a >>b;
        m[a]=b;
    }
    string temp;
    while(cin>>temp){
        if(temp.length()>m[temp].length()) cout << m[temp] ;
        else cout << temp ;
        cout << " ";}
    
    return 0;
}