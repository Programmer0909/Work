#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            v1.push_back(i);
        else if (a == 2)
            v2.push_back(i);
        else if (a == 3)
            v3.push_back(i);
    }
    int k = min(v1.size(), min(v2.size(), v3.size()));
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i];
        cout << endl;
    }

    return 0;
}