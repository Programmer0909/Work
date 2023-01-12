#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                if (k == 0)
                {
                    v.push_back(arr[j]);
                }

                if (v[k] != arr[j])
                {
                    v.push_back(arr[j]);
                    k++;
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    return 0;
}