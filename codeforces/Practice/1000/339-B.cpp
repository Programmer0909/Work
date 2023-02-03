#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    long long int n , in=1 , m,res=0;
    cin>>n >>m;
    while (m--)
    {
        long long int f;cin>>f;
        if(in<=f) res+=(f-in);
        else res+=(n-(in-f));
        in=f;
    }
    cout << res ;
    return 0;
}