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
    string s;
    s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string temp, res = "";
    cin >> c >> temp;
    // cout << c el << temp el;
    if (c == 'R')
    {
        for (int i = 0; i < temp.length(); i++)
        {
            int j = 0;
            while (temp[i] != s[j])
                j++;
            res += s[j - 1];
        }
    }
    else
    {
        for (int i = 0; i < temp.length(); i++)
        {
            int j = 0;
            while (temp[i] != s[j])
                j++;
            res += s[j + 1];
        }
    }
    cout << res;
    return 0;
}