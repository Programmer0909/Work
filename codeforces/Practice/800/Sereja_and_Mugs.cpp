#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s, m = 0, sum = 0;cin >> n >> s;int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];sum+=arr[i];m=max(m,arr[i]);}
    (sum-m)<=s ? (cout << "YES") : (cout << "NO");return 0;}