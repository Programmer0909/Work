#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n;
    cin>>n;


    //AIM : Max of consecutive array


    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=-2147483648;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]>=max)
        {
            max=arr[j];
        }
        cout<<max;
    }
    
    
    return 0;
}