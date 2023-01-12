#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 0, m = 0, oo = 0;
        cin >> n;
        string s, temp;
        cin >> s;
        vector<char> v;
        // unordered_map <char , int > mc;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
            {
                p++;
            }
            else if (s[i] == '-')
            {
                m++;
            }
            else
            {
                v.push_back(s[i]);
            }
        }
        // cout << m << endl;
        // cout << p << endl;
        sort(v.begin(), v.end(), greater<int>());
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i];
        // }
        // cout << endl;
        int i;
        for (i = 0; i < (v.size() - m - p); i++)
        {
            temp = temp + v[i];
        }
        // oo=(int)temp;
        // oo = stoi(temp);
        // cout << oo << endl;
        for (int j = 0; j < p; j++)
        {
            /* code */
            string nn = "";

            // cout << v[i] << endl;
            int pt = (int)(v[i]-'0');
            // int p = static_cast<int>(pt);
            cout << oo+pt << endl;

            // // oo+=stoi(p);
            // oo+=pt;
            // nn = "+" + nn + v[i]  ;
            // cout << nn << endl;
            // int mm = stoi(nn);
            // temp+=nn;
            // cout << oo << endl;
            i++;
        }
        // for (int j = 0; j < m; j++)
        // {
        //     string nnn = "";
        //     nnn =  "-" + nnn + v[i] ;
        //     // cout << nnn << endl;
        //     // int mmm = stoi(nnn);
        //     // oo = oo - mmm;
        //     temp+=nnn;
        //     // cout << oo << endl;
        //     i++;
        // }

        // oo++;
        cout << temp << endl;
        // cout << temp << endl;
        // cout << endl;
    }

    return 0;
}