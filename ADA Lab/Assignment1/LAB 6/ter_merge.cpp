#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int l, int m1, int m2, int r)
{
    int n1 = m1 - l + 1;
    int n2 = m2 - m1;
    int n3 = r - m2;
    vector<int> left(n1), middle(n2), right(n3);
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        middle[i] = arr[m1 + 1 + i];
    for (int i = 0; i < n3; i++)
        right[i] = arr[m2 + 1 + i];
    int i = 0, j = 0, k = 0, x = l;
    while (i < n1 && j < n2 && k < n3)
    {
        if (left[i] <= middle[j] && left[i] <= right[k])
            arr[x++] = left[i++];
        else if (middle[j] <= left[i] && middle[j] <= right[k])
            arr[x++] = middle[j++];
        else
            arr[x++] = right[k++];
    }

    while (i < n1 && j < n2)
    {
        if (left[i] <= middle[j])
            arr[x++] = left[i++];
        else
            arr[x++] = middle[j++];
    }
    while (i < n1 && k < n3)
    {
        if (left[i] <= right[k])
            arr[x++] = left[i++];
        else
            arr[x++] = right[k++];
    }
    while (j < n2 && k < n3)
    {
        if (middle[j] <= right[k])
            arr[x++] = middle[j++];
        else
            arr[x++] = right[k++];
    }
    while (i < n1)
        arr[x++] = left[i++];
    while (j < n2)
        arr[x++] = middle[j++];
    while (k < n3)
        arr[x++] = right[k++];
}
void ternaryMergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int n = r - l + 1;
        int m1 = l + n / 3 - 1;
        int m2 = l + 2 * n / 3 - 1;
        ternaryMergeSort(arr, l, m1);
        ternaryMergeSort(arr, m1 + 1, m2);
        ternaryMergeSort(arr, m2 + 1, r);
        merge(arr, l, m1, m2, r);
    }
}
int main()
{
    vector<int> arr = {7, 2, 1, 5, 8, 8, 4, 5, 480, 545, 5, 54, 42454, 54, 55, 5, 4, 54, 87};
    ternaryMergeSort(arr, 0, arr.size() - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}