#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n,m;
    cin>>n>>m;
    int a=n/m;
    int arr[m];
    for (int i = 0; i < m; i++) arr[i]=a;
    for (int i = 0; i < n%m; i++) arr[i]++;
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    return 0;}