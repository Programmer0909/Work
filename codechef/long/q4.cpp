#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        int i,tm=0,maxi=INT_MIN;
        for (int i = 0; i < n - 1; i++)
            cin >> arr[i];
        for (int j = 0; j < n-1; j++)
        {
            tm+=arr[j];
            maxi=max(maxi,arr[j]);
            
        }
        
        // while (i--)
        // {
        
        tm=tm+maxi;
        cout << tm << endl;
    }
    return 0;
}