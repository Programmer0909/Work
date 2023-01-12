#include <bits/stdc++.h>
using namespace std; 
int main(){
    long long int n,m,res=0; cin>>n>>m;
    if (m==1) cout << (n-1);else cout << n*(m-1);
    return 0;}