#include <bits/stdc++.h>
using namespace std;
//AIM : 

int prime(int n){
    int ct=0;
    if (n==2 || n==3) return 1;
    if (n%2==0 || n%3==0) return 0;
    for (int i = 5; i*i <= n; i=i+6)
    {
        cout<<ct<<endl;
        if (n%i==0 || n%(i+2)==0) return 0;
        ct++;
    }
    return 1;
}


int main(){
    int n;
    cin>>n;
    cout<<prime(n);
    return 0;
}