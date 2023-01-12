#include <bits/stdc++.h>
using namespace std;
int main(){int n,p;cin>>p>>n;bool arr[p];
    for (int i = 0; i < p; i++) arr[i]=false;
    for (int i = 0; i < n; i++){long long int a;cin>>a; if(arr[a%p]==false) arr[a%p]=true;else {cout << i+1;return 0;}}
    cout << -1 ;return 0;}