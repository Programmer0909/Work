#include <bits/stdc++.h>
using namespace std;
#define long long ll;
// AIM :
int mostFrequent(int arr[], int n)
{
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
            curr_count = 1;
       
        if (curr_count > max_count) {
            max_count = curr_count;
            res = arr[i - 1];
        }
    }
 
    return max_count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }
        sort(arr,arr+n);
        cout << n-mostFrequent(arr,n) << endl;

    }

    return 0;
}