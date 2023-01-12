#include <bits/stdc++.h>
using namespace std;
#define intii int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, maxi = 0, mini = 0;
    string s, res = "";
    cin >> n >> s;
    int arr[26]={0};
    map<string, int> m;
    map<char, int> count;
    res=s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            // res += s[i];
            count[res[0]]++;
            m[res]++;
            res=s[i];
        }
        // else if (i == n - 1)
        // {
        //     // res += s[i];
        //     count[res[0]]++;
        //     m[res]++;
        //     res=s[i];
        // }
        else res += s[i];
    }
    if(m.count(res)==0) m[res]++;
    
    for (auto i : m)
    {
        string p = i.first;
        if (count[p[0]] > 1)
        {
            // ct = max(ct, (i.first).length());
            a = (i.first).length();
            if (a > ct && a!=0)
                ct = a;
        }
        else if(i.second>1) ct=1;
        // cout << i.first el;
    }
    // cout << m.size() << endl;
    if(m.size()==1) {cout << ceil(n/2.0) el; return 0;}
    cout << ct el;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}