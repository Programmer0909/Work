#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    ll int n, ct = 0, res = 0, max = 0, a = 0, min = 0;
    cin >> n;
    string s, y;
    cin >> s >> y;
    bool arr1[26];
    bool arr2[26];
    for (int i = 0; i < 26; i++)
    {
        arr1[i] = false;
        arr2[i] = false;
    }

    map<char, int> m1;
    map<char, int> m2;
    for (int i = 0; i < n; i++)
    {
        m1[s[i]]++;
        arr1[s[i] - 97] = true;
    }
    for (int i = 0; i < n; i++)
    {
        m2[y[i]]++;
        arr2[y[i] - 97] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] == true && arr2[i] == true)
        {

            (m1[(char)(97+i)] <= m2[(char)(97+i)]) ? (a = m1[(char)(97+i)]) : ((a = m2[(char)(97+i)]));
            (a <= res) ? (res = res) : (res = a);
        }
    }
    cout << res el;
    return 0;
    // int n;
    // cin >> n;
    // string s,y;
    // cin >> s >> y;
    // string res="";
    // bool arr1[26];
    // bool arr2[26];
    // for (int i = 0; i < 26; i++)
    // {
    //     arr1[i] = false;
    //     arr2[i] = false;
    // }

    // map<char, int> m1;
    // map<char, int> m2;
    // for (int i = 0; i < n; i++)
    // {
    //     m1[s[i]]++;
    //     arr1[s[i] - 97] = true;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     m2[y[i]]++;
    //     arr2[y[i] - 97] = true;
    // }
    
    
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