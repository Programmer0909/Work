#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, ct = 0;
    cin >> n;
    ll int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    ll int op[n];
    for (int i = 0; i < n-1; i++) op[i]=arr[i]+arr[i+1];
    op[n-1]=arr[n-1];
    for (int i = 0; i < n; i++) cout<<op[i] <<" ";
    return 0;
}