#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum,psum;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    sum = arr[0];
    psum = arr[0];
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] <= (arr[0] / 2)) {v.push_back(i+1);psum+=arr[i];}
    }
    if (psum>sum/2)
    {
        cout << v.size()+1<<endl;
        cout << 1 << " ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] <<" ";
        }
        
    }
    else cout << 0;
    return 0;
}