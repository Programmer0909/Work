#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,sa=0,sb=0,sc=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sa +=a;
        sb+=b;
        sc+=c;
    }
    if(sa==0 && sb==0 && sc==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}