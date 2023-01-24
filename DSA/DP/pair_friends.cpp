#include <bits/stdc++.h>
using namespace std;

//AIM : 

int sol(int n){
    if(n==0) return 1;

    if(n>1) return sol(n-1) + (n-1)*sol(n-2);
    else return sol(n-1);
}







int main(){
    int n;
    cin>>n;
    cout << sol(n) << endl;
    return 0;
}