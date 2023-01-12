#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, max = 0, min = 0;
    cin >> n;
    string s;

    

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        // arro[a] = true;
    }
   
    // cout << ct el;
    ct=10-n;
    // if ()
    // {
    //     /* code */
    // }
    
    if (ct==2)
    {
        cout << 6 el;
    }
    else
    {
    cout << (((ct) * (ct - 1)) / 2) * 6 el;
        
    }
    
    // cout << (((ct) * (ct + 1)) / 2) * 6 el;
    return 0;
}

int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}