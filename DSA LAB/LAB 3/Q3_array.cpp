#include <bits/stdc++.h>
using namespace std;

class stacki
{
public:
    int arr[100];
    int top = -1;
    void stpush(int a);
    int stpop();
    int peek();
    bool emchk();
};

void stacki ::stpush(int a)
{
    top++;
    arr[top] = a;
}
int stacki ::stpop()
{
    int x = arr[top--];
    return x;
}

int stacki::peek()
{
    return arr[top];
}

bool stacki::emchk()
{
    if (top == -1)
    {
        return false;
    }
    return true;
}

// AIM :
int main()
{
    stacki s;
    int ch = 1;
    while (true)
    {
        cout << "1 FOR PUSH" << endl;
        cout << "2 FOR POP" << endl;
        cout << "3 FOR PEEK" << endl;
        cout << "4 FOR CHECK EMPTY" << endl;
        cout << "ENTER CHOICE :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int ele;
            cin >> ele;
            s.stpush(ele);
            break;
        case 2:

            cout << "POPPED ELEMENT IS :" << s.stpop() << endl;
            break;
        case 3:

            cout << "TOP ELEMENT IS :" << s.peek() << endl;
            break;
        case 4:
            s.emchk() ? (cout << "NO NOT EMPTY") : (cout << "YES EMPTY");
                // cout << "POPPED ELEMENT IS :" << s.stpop();
                break;

        default:
            break;
        }
    }

    return 0;
}
