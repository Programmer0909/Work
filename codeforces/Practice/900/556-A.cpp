#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , o=0,z=0; string s;
    cin>>n>>s;
    for (int i = 0; i < n; i++) ((s[i]&1)==0)?(o++):(z++);
    cout << n-2*(min(o,z));
    return 0;
}