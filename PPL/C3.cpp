#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    map<int, int> m;
    for (int i = 0; i < n; i++) m[arr[i]]++;
    for (auto pr : m) cout << pr.first << " : " << pr.second << endl;

    return 0;
}