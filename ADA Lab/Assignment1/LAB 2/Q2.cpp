#include <bits/stdc++.h>
using namespace std;
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// AIM :
int ct_l = 0, ct_b = 0;
int linear_search(int n, int ele)
{
    if (arr[n - 1] == ele)
    {
        ct_l += 2;
        return n - 1;
    }
    ct_l++;
    return linear_search(n - 1, ele);
}
int sol(int n, int ele, int start, int end)
{
    if (start > end)
    {
        ct_b += 2;
        return 0;
    }
    ct_b++;
    int mid = (start + end) / 2;

    if (ele == arr[mid])
    {
        ct_b += 2;
        return mid;
    }

    if (ele < arr[mid])
    {
        ct_b += 2;
        return sol(n, ele, start, mid - 1);
    }
    if (ele > arr[mid])
    {
        {
            ct_b += 2;
            return sol(n, ele, mid + 1, end);
        }
    }
}
int main()
{
    cout << linear_search(10, 6) << endl;
    cout << ct_l << endl;
    cout << sol(10, 6, 0, 9) << endl;
    cout << ct_b << endl;
    return 0;
}