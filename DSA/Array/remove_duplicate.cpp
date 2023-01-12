#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30, 30};
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==arr[i+1])
        {
            arr[i+1]=arr[i+2];
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}