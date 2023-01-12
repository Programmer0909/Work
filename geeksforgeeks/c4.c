#include <stdio.h>


/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

int duplicates(int arr[] , int n){
    int ar[n];
    int a=-1 , b;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j]){
                a=a+1;
                b=arr[i];
                
                ar[a]=b;
            }
        }
        
    }
    
}


int main()
{
    int arr[5]={1,2,3,4,2};
    int n=5;
    return 0;
    
}