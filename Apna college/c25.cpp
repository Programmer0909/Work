#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM :

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int  ed = 0;

    // for (int st = st; st < ed; st++)
    // {
    //     while (ed < n)
    //     {
    //         cout << arr[st];
    //         ed++;
    //     }
    // }

    for (int st = 0; st < n; st++)
    {
        for (int i = st; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
    


    return 0;
}