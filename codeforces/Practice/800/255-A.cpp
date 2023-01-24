#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, t1 = 0, t2 = 0, t3 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((i) % 3 == 0)
            t1 += arr[i];
        if ((i) % 3 == 1)
            t2 += arr[i];
        if ((i) % 3 == 2)
            t3 += arr[i];
    }
    if (t1 > t2 && t1 > t3)
        cout << "chest" << endl;
    else if (t2 > t1 && t2 > t3)
        cout << "biceps" << endl;
    else if (t3 > t1 && t3 > t2)
        cout << "back" << endl;
    
    return 0;
}