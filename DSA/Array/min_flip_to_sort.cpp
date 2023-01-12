#include <bits/stdc++.h>
using namespace std;

//AIM : Given a binary array, we need to convert this array into an array that either contains all 1s or all 0s.  
// We need to do it using the minimum number of group flips. 
// Input : arr[] = {1, 1, 0, 0, 0, 1}
// Output :  From 2 to 4
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            if (arr[i]!=arr[0])
            {
                cout << "From " << i <<" ";
            }
            else
            {
                cout <<"to " << i << endl;
            }
            
        }

        
    }
    if (arr[n-1]!=arr[0])
    {
        cout << "to " << n-1;
    }
    
    return 0;
}