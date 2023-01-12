#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, pre_sum = 0, res = 0,sum=4;
    int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++){
        pre_sum += arr[i];
        if (m.find(pre_sum) == m.end()) m.insert({pre_sum,i});
        if (m.find(pre_sum-sum) != m.end()) res = max(res, i - m[pre_sum-sum]);}
    cout << res << endl;
    return 0;
}