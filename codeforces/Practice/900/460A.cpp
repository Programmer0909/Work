#include <bits/stdc++.h>
using namespace std;

//AIM :
int main(){
    int n,k,i=1;
    cin>>n>>k;
    // float temp=n;
    // while (i<=n)
    // {
    //     // n+=ceil(temp/k);
    //     // temp=ceil(temp/k);
    //     if(i%k==0) n++;
    //     i++;
    // }
    // cout << n;
    cout << (n*k-1)/(k-1);
    return 0;
}

