#include <bits/stdc++.h>
using namespace std;

// AIM :
int ct = 0;
int bi_sr(int arr[], int st, int ed, int ele)
{
    ct++;
    cout << ct << endl;
    if (st > ed)
    {
        cout << ct << endl;

        ct++;
        return -1;
    }
    cout << ct << endl;

    ct++;
    int mid = (st + ed) / 2;
    cout << ct << endl;

    ct++;
    if (arr[mid] == ele)
    {
        cout << ct << endl;

        ct++;
        return mid;
    }

    else if (arr[mid] > ele)
    {
        cout << ct << endl;
        ct++, bi_sr(arr, st, mid, ele);
    }
    else if (arr[mid] < ele)
    {
        cout << ct << endl;
        ct++, bi_sr(arr, mid + 1, ed, ele);
    }
}

int ter_sr(int arr[], int st, int ed, int ele)
{

    if (st > ed)
        return -1;

    int m1 = st + (ed - st) / 3;
    int m2 = ed - (ed - st) / 3;

    if (arr[m1] == ele)
        return m1;
    if (arr[m2] == ele)
        return m2;

    if (ele < arr[m1])
        ter_sr(arr, st, m1, ele);
    else if (ele > arr[m2])
        ter_sr(arr, m2 + 1, ed, ele);
    else
        ter_sr(arr, m1 + 1, m2, ele);
}
int fake_coin(int arr[], int st, int ed)
{
    if (st > ed)
        return -1;

    int mid = (st + ed) / 2;

    float s1 = 0, s2 = 0 ;
    int i = 0;
    for (i = 0; i < mid; i++)
    {
        s1 += arr[i];
    }
    s1/=(i);
    
    for ( i = mid+1; i < ed; i++)
    {
        s2 += arr[i];
    }
    s2/=(i-mid-1);
    cout << mid << " s1 " << s1 << " s2 " << s2 << endl;
    if (s1 == s2)
        return mid;
    else if (s1 < s2)
        fake_coin(arr, st, mid);
    else
        fake_coin(arr, mid +1, ed);
}
int main()
{
    int n = 8;
    // cin >> n;
    // int arr[8] = { 2,2,2,2,2,2,1,2};
    // for (int i = 0; i < n; i++)
    //     arr[i] = i + 1;

    cout << "TERNARY SEARCH : " <<ter_sr(arr, 0, n - 1, 5)  ;
    cout << "BINARY SEARCH" <<  bi_sr(arr, 0, n - 1, 5)  ;
    cout << "Fake coin : " << fake_coin(arr, 0, n - 1);

    return 0;
}