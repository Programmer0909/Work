#include <bits/stdc++.h>
using namespace std;
bool com(char a, char b)
{
    if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
        return true;
    return false;
}
bool check(string n)
{
    stack<char> s;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '(' || n[i] == '{' || n[i] == '[')
            s.push(n[i]);
        else
        {
            if (s.empty())
                return false;
            else if (com(s.top(), n[i]) == false)
                return false;
            else
                s.pop();
        }
    }
    if (s.empty())
        return true;
}
int main()
{
    string n;
    cin >> n;
    (check(n)) ? cout << "yes" << endl : cout << "NO" << endl;
    return 0;
}