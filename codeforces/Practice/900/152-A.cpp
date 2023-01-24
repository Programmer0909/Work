    #include <bits/stdc++.h>
    using namespace std;

    //AIM : 
    int main(){
        int n,k;
        cin>>n>>k;
        int a = (k-(2*n));
        int res = (a <=n)?(n-a):(0);
        cout << res << endl;
        return 0;
    }