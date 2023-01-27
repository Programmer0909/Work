#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    n=n*2;
    map <char,int> m;
    char a ;
    while (cin>>a) m[a]++;
    int res=0;
    for(auto i : m) if(i.first!='.')res=max(res,i.second);
    (res<=n)?(cout << "YES"):(cout << "NO");
    return 0;
}