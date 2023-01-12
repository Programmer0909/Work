#include <iostream>
#include <math.h>
using namespace std;

int bin (int arr[],int n,int key){
    int s,e;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        

   }return -1;
    
    
}




int main(){

    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<bin(arr,n,key);
    
    
    return 0;
}