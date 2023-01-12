#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, x,res=0;
    cin >> n >> k >> x;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    for (int i = 0; i < n-k; i++) res+=arr[i];
    res+=(k*x);
    cout << res ;
    return 0;}