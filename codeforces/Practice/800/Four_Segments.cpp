#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int main(){
    int t;cin >> t;
    while (t--){
        int arr[4]; for (int i = 0; i < 4; i++) cin>>arr[i];
        sort(arr,arr+4); cout << min(arr[0],arr[1])*min(arr[2],arr[3])<< endl;}return 0;}