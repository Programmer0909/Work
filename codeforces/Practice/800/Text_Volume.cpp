// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int ct = 0, maxi = 0, n;
//     cin >> n;
//     string s;
//     getline(cin, s);
//     vector<int> v;
//     cout << s.length() << endl;
//     // for (int i = 0; i < s.length(); i++)
//     // {
//     //     if (s[i] != ' ')
//     //     {
//     //         if (s[i] >= 65 && s[i] <= 90)
//     //         {
//     //             ct++;
//     //             cout << "fjjjd" << endl;
//     //         }
//     //     }
//     //     cout << ct << endl;
//     //     if (s[i] == ' ')
//     //     {
//     //         v.push_back(ct);
//     //         ct = 0;
//     //     }
//     //     else if (i = n - 1)
//     //     {
//     //         v.push_back(ct);
//     //         ct = 0;
//     //     }
//     // }

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i];
//     // }

//     // for (int j = 0; j < v.size(); j++)
//     //     maxi = max(maxi, v[j]);
//     // cout << maxi;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{int m=0;int n;cin >> n;string s;
    while (cin >> s){int r=0;for (auto c : s)if (isupper(c))++r;
    m=max(m,r);}
    cout << m << endl;}