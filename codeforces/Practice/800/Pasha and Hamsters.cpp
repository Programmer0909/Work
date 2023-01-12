#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector <bool> v(n, false);;
    for (int i = 0; i < a; i++){
        int m;
        cin >> m;
        v[m-1]=true;}
    int arr[b];
    for (int i = 0; i < b; i++) cin>>arr[i];
    for (int i = 0; i < n; i++) (v[i])?(cout << 1 << " "):(cout << 2 << " ");
    return 0;}