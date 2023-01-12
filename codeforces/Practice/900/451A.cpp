#include <bits/stdc++.h>
using namespace std; 
int main(){int n,m,ct=0;cin>>n>>m;int res=n*m;while (res>0){res-=(n+m-1);ct++;n--;m--;}(ct%2==0)?(cout << "Malvika"):(cout << "Akshat");return 0;}