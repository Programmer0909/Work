#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    unsigned int temp[n-1];
    for (int i = 0; i < n-1; i++) temp[i]=arr[i]+arr[i+1];    
    for (int i = 2; i < n; i++)
    {
        if(arr[i]<temp[i-2]) {cout << "YES";return 0;}

    }
    cout << "NO";
    return 0;
}