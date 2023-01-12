#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ct=0;
    cin>>a>>b;
    while (a<=b){
        a*=3;
        b*=2;
        ct++;}
    cout << ct << endl;
    return 0;}