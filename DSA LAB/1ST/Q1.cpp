#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n,ct=0;
    // Constant time 
    int arr[6]={1,2,3,4,5,6};
    cout << arr[5] << endl;
    cout << "no of time the operations were performed : 1" << endl;

    // O(n) time
    for (int i = 0; i < 6; i++)
    {
        ct++;
    }
    cout << "no of time the operations were performed : " << ct << endl;
    ct=0;

    // O(n^2) time


    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            ct++;
        }
        
    }
    cout << "no of time the operations were performed : " << ct << endl;
    
    return 0;
}




