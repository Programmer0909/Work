
#include <bits/stdc++.h>
using namespace std;

bool chk_op(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

int check_pre(char c1)
{
    if (c1 == '+' || c1 == '-')
        return 1;
    else if (c1 == '*' || c1 == '/')
        return 2;
    else
        return 3;
}

string infix_to_post(string str)
{
    stack<char> sac;
    string opt = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (chk_op(str[i]))
            opt += str[i];
        else if (str[i] == '(')
            sac.push(str[i]);
        else if (str[i] == ')')
        {
            while (sac.top() != '(')
            {
                opt = opt + (char)sac.top();
                sac.pop();
            }
        }
        else
        {
            while (sac.empty() == false && check_pre(str[i]) <= check_pre(sac.top()))
            {
                opt = opt + sac.top();
                sac.pop();
            }
            sac.push(str[i]);
        }
    }
    while (sac.empty() == false)
    {
        opt = opt + sac.top();
        sac.pop();
    }
    return opt; 
}

// AIM :
int main()
{
    string n;
    cin >> n;
    cout << infix_to_post(n) << endl;
    return 0;
}
