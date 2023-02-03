#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    long long int n , ct=0;
    cin>>n;
    while (n)
    {
        if(n%2!=0) ct++;
        n=n/2;
    }
    cout << ct ;
    return 0;
}