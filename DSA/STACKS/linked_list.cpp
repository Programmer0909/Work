#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int a;
    Node *next;
    Node(int data)
    {
        this->a = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->a;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class stacki
{
public:
    // int arr[100];
    Node *head = new Node(10);
    int top = -1;
    void stpush(int a);
    int stpop();
    int peek();
    bool emptychk();
};

void stacki :: stpush(int a)
{
    Node *temp = new Node(a);
    temp->next = head;
    head = temp;
}

int stacki ::stpop()
{
    Node *temp = head;
    int x = temp->a;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return x;
}

int stacki::peek()
{
    return head->a;
}

bool stacki::emptychk()
{
    if (head == NULL)
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
            s.emptychk() ? (cout << "NO NOT EMPTY") : (cout << "YES EMPTY");
            // cout << "POPPED ELEMENT IS :" << s.stpop();
            break;

        default:
            break;
        }
    }

    return 0;
}