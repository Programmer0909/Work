#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,sum=0;
    cin>>n;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    if(n>sum) {cout << -1 << endl;return 0;}
    sort(arr,arr+12,greater<int>());
    int i = 0;
    while (n>0 && i<12)
    {
        n-=arr[i];
        i++;
    }
    cout << i << endl;
    return 0;
}