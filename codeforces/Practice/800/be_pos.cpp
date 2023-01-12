#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,pos=0,neg=0,z=0;
    cin>>n;
    int arr[n];
    float temp=n;
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
      if(arr[i]>0) pos++;
      else if(arr[i]<0) neg++;
      else z++;
    }
    temp=ceil(temp/2);
    if(pos>=temp) cout << 1;
    else if(neg>=temp) cout << -1;
    else cout << 0;
    return 0;
}