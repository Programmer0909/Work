#include <bits/stdc++.h>
using namespace std; 
int main(){
    unsigned int long long n,temp=0,res;
    cin>>n;
    res=(n*(n+1))/2;
    int arr[n-1];
    // int arr[n];
    for (int i = 0; i < n-1; i++) cin>>arr[i];
    for (int i = 0; i < n-1; i++) temp+=arr[i];
    cout << res-temp;
    return 0;}