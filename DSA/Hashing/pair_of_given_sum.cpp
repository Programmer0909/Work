#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,sum;
    cin>>n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum-arr[i])!=s.end())
        {
            cout << "Yes" ;
            return 0;
        }
        else
        {
            s.insert(arr[i]);
        }
        
    }
    
    return 0;
}