#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,k;
    cin>>n>>k;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        int k = (k-b<0)?(a-(b-k)):(a);
        res=max(res,k);
        // cout << res << endl;
    }
    cout << res << endl;
    return 0;
}