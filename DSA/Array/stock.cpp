#include <bits/stdc++.h>
using namespace std;

// AIM :

int main()
{
    int n, base = 0;
    int flag = 0;
    int profit = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (!flag && (arr[i] < arr[i + 1]))
        {
            cout << "BUY THE STOCKS" << endl;

            base = arr[i];
            flag = 1;
            cout << "base :" << base << " and index = " << i << endl;
        }

        else if ((arr[i] >= arr[i + 1]) && flag)
        {
            // SELL THE STOCKS
            cout << "SELL THE STOCKS" << endl;

            profit = profit + arr[i] - base;
            flag = 0;
            cout << "base :" << base << " and index = " << i << " profit : " << profit << endl;
        }

        if ((i == n - 1) && flag)
        {
            cout << "SELL THE FINAL STOCKS" << endl;
            profit = profit + arr[i] - base;
            flag = 0;
            cout << "base :" << base << " and index = " << i << " profit : " << profit << endl;
        }
    }
    cout << profit;

    return 0;
}