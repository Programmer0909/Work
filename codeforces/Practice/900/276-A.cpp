#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,k;
    cin>>n>>k;
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        int m = (k-b<0)?(a-(b-k)):(a);  
        res=max(res,m);
    }
    cout << res << endl;
    return 0;
}