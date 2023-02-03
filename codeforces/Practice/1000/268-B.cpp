#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    long long int n,res=0;
    cin>>n;
    res+=n;
    // cout << n + (n-1)*(n-1);
    for (int i = 1; i <=n; i++)  res+=((n-i)*i);
    cout << res;
    

    return 0;
}