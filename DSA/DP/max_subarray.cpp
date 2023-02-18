#include <bits/stdc++.h>
using namespace std;
int msum(int a[], int n)
{
    int curr_sum = a[n-1], max_sum = a[0];
    if (a[0] >= 0)
        curr_sum = 0;
    for (int i = 1; i < n; i++)
    {
        curr_sum += a[i];
        max_sum = max(max_sum, curr_sum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = msum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}