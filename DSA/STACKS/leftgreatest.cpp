#include <bits/stdc++.h>
using namespace std;

vector<int> leftgrt(int arr[], int n)
{
    vector<int> v;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[i] >= s.top())
        {
            s.pop();
        }
        s.empty() ? v.push_back(-1) : v.push_back(s.top());
        s.push(arr[i]);
    }
    return v;
}

// AIM :
int main()
{
    int n = 5;
    int arr[n] = {20, 30, 10, 5, 15};
    vector<int> v = leftgrt(arr, n);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}