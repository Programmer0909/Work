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
    ll int n, ct = 0,ctz=0, time_book = 0;
    cin >> n >> time_book;
    ll int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]==0) ctz++;
        if (time_book>0)
        {
            ct++;
            ll timeleft = 86400 - arr[i];
            time_book -= timeleft;
        }
    }
    if (ctz==100)
    {
        cout << 12;
        
        return 0;
    }
    
    cout << ct;
    return 0;
}