#include <bits/stdc++.h>
using namespace std;
// AIM : TIME : N^2; SPACE : O(1) ;NOT STABLE SORTING ALGORITHM
int main(){
    int arr[] = {3, 7, 3, 7, 0, 6, 32, 4, 8, 0, 6, 4, 6, 90, 0, 1};
    int n = 16;
    for (int i = 0; i < n; i++)
    {   
        int ind=i;
        int mini=arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (mini>arr[j])
            {   
                mini=arr[j];
                ind=j; 
            }
        }
        swap(arr[i],arr[ind]);
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}