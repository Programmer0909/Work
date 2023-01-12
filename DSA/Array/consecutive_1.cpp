#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,ct_max=0,ct=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            ct++;
        }
        if(arr[i]==0 || i==n-1)
        {
            if (ct_max<=ct)
            {
                ct_max= ct;
                ct=0;
            }
            
        }
        
    }
    cout << ct_max;
    
    return 0;
}