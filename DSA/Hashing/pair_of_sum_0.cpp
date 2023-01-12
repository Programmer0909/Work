#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, sum = 0;
    int arr[] = {1, 4, 13, -3, -10, 5};
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if ((s.find(sum) != s.end()))
        {
            (cout << "Yes" << endl);
            return 0;
        }
        else
        {
            (s.insert(sum));
        }
    }

    return 0;
}

