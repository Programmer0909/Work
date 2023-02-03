#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,m=14;
    cin>>n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int i=0;
    // cout << n << " " << arr[i]<< endl;
    // int a = __lower_bound(arr,arr+m,n,=);
    while (i<m )
    {
        if(arr[i]>n) break;
        if(n%arr[i]==0) {cout << "YES" << endl; return 0;}
        i++;
        // cout << i << " " << arr[i] << endl;
    }
    cout << "NO";
    return 0;
}