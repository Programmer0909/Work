#include <iostream>
#include <math.h>
using namespace std;

// AIM : Longest arimthmetic subarray

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ct = 2, ans = 2;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i + 1] - arr[i]) == (arr[i + 2] - arr[i + 1]))
        {
            ct++;
            if (ct > ans)
            {
                ans = ct;
            }
        }
        else
        {
            ct == 2;
        }
        cout << ct << endl;
        cout<<"fgadgfcsdvfgjhvczkhcf"<<endl;
    }
    cout << ans;

    return 0;
}