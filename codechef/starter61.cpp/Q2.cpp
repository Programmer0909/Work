#include <bits/stdc++.h>
using namespace std;
#define int long long int 
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int ch()
{

    int n,res=0;
    cin >> n;
    stack <int> s;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a ;
        if(!s.empty()) b=s.top();
        s.push(a);
        if(s.top()!=b) {s.pop();res++;s.pop();}
    }
    cout << "HE";
    int temp=s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s.top()==0)
        {
            cout<< res el;
            return 0;
        }
        else s.pop();
    }
    
    res+=(temp/3);
    cout << res el;
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) ch();
    return 0;
}

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
// int n, s, x, c0, c1, c2;
// void solve()
// {
//     cin >> n;
//     s = c0 = c1 = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         cin >> x;
//         c0 += (x == 0);
//         c1 += (x == 1);
//         c2 = min(c0, c1);
//         c0 -= c2;
//         c1 -= c2;
//         s += c2;
//     }
//     cout << s + c1 / 3 << endl;
// }
// signed main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//         solve();
// }