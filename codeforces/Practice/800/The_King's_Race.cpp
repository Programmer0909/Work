#include <bits/stdc++.h>
using namespace std; 
int main(){unsigned long long int n,x,y;cin>>n>>x>>y;
    ((max(x,y)-1)>(n-min(x,y)))? (cout << "BLACK"):(cout << "WHITE");return 0;}