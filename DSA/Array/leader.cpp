#include <bits/stdc++.h>
using namespace std;

// AIM :t = theta (n) ; space = theta (1)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ldr= 0;
    for (int i = n-1; i >0; i--)
    {
        if (ldr<arr[i])
        {
            ldr=arr[i];
            cout << ldr << " ";
        }
        
    }
    
    return 0;
}