// #include <bits/stdc++.h>
// using namespace std;

// bool chk_op(char ch)
// {
//     return (ch >= 'a' && ch <= 'z');
// }

// int check_pre(char c1)
// {
//     if (c1 == '+' || c1 == '-')
//     {
//         return 1;
//     }
//     else if (c1 == '*' || c1 == '/')
//     {
//         return 2;
//     }
//     else
//     {
//         return 3;
//     }
// }

// string infix_to_post(string str)
// {
//     stack<char> sac;
//     string opt = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (chk_op(str[i]))
//         {
//             opt = opt + str[i];
//         }
//         else if (str[i] == '(')
//         {
//             sac.push(str[i]);
//         }
//         else if (str[i] == ')')
//         {
//             while (sac.top() != '(')
//             {
//                 opt = opt + (char)sac.top();
//                 sac.pop();
//             }
//         }
//         else
//         {
//             while (sac.empty() == false && check_pre(str[i]) <= check_pre(sac.top()))
//             {
//                 opt = opt + sac.top();
//                 sac.pop();
//             }
//             sac.push(str[i]);
//         }
//     }
//     while (sac.empty() == false)
//     {
//         opt = opt + sac.top();
//         sac.pop();
//     }
//     return opt;
// }

// // AIM :
// int main()
// {
//     string n;
//     cin >> n;
//     cout << infix_to_post(n) << endl;
//     return 0;
// }

// CPP program to find infix for
// a given postfix.
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char x)
{
    return (x >= 'a' && x <= 'z') ||
           (x >= 'A' && x <= 'Z');
}

// Get Infix for a given postfix
// expression
string getInfix(string exp)
{
    stack<string> s;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        // Push operands
        if (isOperand(exp[i]))
        {
            string op(1, exp[i]);
            s.push(op);
        }

        // We assume that input is
        // a valid postfix and expect
        // an operator.
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + exp[i] +
                   op1 + ")");
        }
    }

    // There must be a single element
    // in stack now which is the required
    // infix.
    return s.top();
}

// Driver code
int main()
{
    string exp ;cin>>exp;
    cout << getInfix(exp);
    return 0;
}
