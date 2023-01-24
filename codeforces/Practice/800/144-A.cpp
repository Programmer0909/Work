#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int max = *max_element(arr, arr + n), min = *min_element(arr, arr + n);
    int mx_ind= 0 , min_ind=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==max) {mx_ind=i+1;break;}
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==min) {min_ind=i+1;}
    }
    // cout << mx_ind << endl << min_ind << endl;
    // if(mx_ind==0 && min_ind == n-1) {cout << 0 << endl; return 0;}
    (min_ind > mx_ind)?(cout << (mx_ind-1) + (n-min_ind) ) :(cout << (mx_ind-1) + (n-min_ind)-1);
    return 0;
}