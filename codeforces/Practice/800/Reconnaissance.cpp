#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main(){ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, d, ct = 0;cin >> n >> d;
    ll int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) for (int j = i+1; j < n; j++) if (abs(arr[i] - arr[j]) <= d) ct++;
    cout << ct * 2;return 0;}