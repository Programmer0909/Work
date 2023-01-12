#include <iostream>
#include <math.h>
using namespace std;

//AIM : All subarray from an array

int main(){

    int n=4,sumi=0,maxi=0;
    // cin>>n;
    int arr[n]={-1,4,7,2};
    // for (int i = 0; i <n ; i++)
    // {
    //     cin>>arr[i];
    // }
    
    int st=0,ed=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sumi+=arr[k];
            }
            if (maxi>=sumi)
            {
                maxi=sumi;
            }
            
            cout<<endl;
            cout<<maxi;
            cout<<endl;

        }
        
    }
    
    
    return 0;
}