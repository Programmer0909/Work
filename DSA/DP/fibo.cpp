#include <bits/stdc++.h>
using namespace std;

//AIM : 
    int dp[100]={0};
    

int fibotopdown(int n){
    if (n==1 || n==0){return n;}
    if(dp[n]!=0) {return dp[n];}
    int ans = fibotopdown(n-1 ) + fibotopdown(n-2 ); return dp[n]=ans;
}

int fibobottomup(int n){
    int arr[100]={0};
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i <= n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}











int main(){
    int n;
    cin>>n;
    // cout << fibotopdown(n) ;
    cout << fibobottomup(n) ;
    
    
    return 0;
}