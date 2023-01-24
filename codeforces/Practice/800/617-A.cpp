#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    cout << n/5 + (bool)(n%5>0) << endl;
    return 0;
}