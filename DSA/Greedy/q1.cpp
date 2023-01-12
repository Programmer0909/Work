#include <bits/stdc++.h>
using namespace std;

//AIM : Minumum difference between 2 elements
int main(){
    int n,res=INT_MAX;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
        // if(abs(arr[i]-arr[i-1]) < res) 
        res=min(res,abs(arr[i]-arr[i-1]));

    }
    cout << res << endl;
    
    return 0;
}