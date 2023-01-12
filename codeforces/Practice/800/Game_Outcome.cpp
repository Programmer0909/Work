#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ct=0;cin>>n;
    int arr[n][n] , row[n],col[n]; 
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
    for (int i = 0; i < n; i++){
        int sum=0;
        for (int j = 0; j < n; j++) sum+=arr[i][j];
        row[i]=sum;}
    for (int i = 0; i < n; i++){
        int sum=0;
        for (int j = 0; j < n; j++) sum+=arr[j][i];
        col[i]=sum;}
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (col[i]>row[j]) ct++;
    cout << ct << endl;return 0;}