#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int a,b,res;
    cin>>a>>b;
    res=a;
    // cout << (a*b)/(b-1) -1 ;
    while (a)
    {
        res+=(a/b);
        int temp; 
        if(a>b) temp=a%b;
        else temp=0;
        a/=b;
        a+=temp;
    }
    cout<<res;
    return 0;
}