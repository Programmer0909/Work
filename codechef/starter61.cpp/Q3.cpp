#include <bits/stdc++.h>
using namespace std;
int main(){int n,ct=1;cin>>n;string arr[n];for (int i = 0; i < n; i++) cin >> arr[i];for (int i = 1; i < n; i++) if(arr[i]!=arr[i-1]) ct++;cout << ct;return 0;}