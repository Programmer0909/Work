#include <bits/stdc++.h>
using namespace std;

// AIM : Given an array arr[], find the maximum j – i such that arr[j] > arr[i]

//  Naive approach
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = n - 1; j > i; --j)
        {
            if (arr[j] > arr[i] && max < (j - i))
            {
                max = j - i;
            }
        }
    }
    cout << max;
    return 0;
}