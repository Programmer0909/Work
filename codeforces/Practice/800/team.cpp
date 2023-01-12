#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    int res=0;
    for (int i = 0; i < n; i++)
    {
        int a,b,c,ct=0;
        cin >> a >> b >> c;
        if (a) ct++;
        if (b) ct++;
        if (c) ct++;
        if (ct>=2) res++;
    }
    cout << res << endl;
    return 0;
}