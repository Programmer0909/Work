#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int first = 0, last = n - 1;
    while (first < last)
    {
        if ((arr[last] + arr[first]) == s)
        {
            cout << first << " " << last;
            return 0;
        }
        else if ((arr[last] + arr[first]) > s)
        {
            last--;
        }
        else if ((arr[last] + arr[first]) < s)
        {
            first++;
        }
    }
    cout << "-1";

    return 0;
}