#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

Node *mid(Node *&head)
{
    if (head == NULL || head->next == NULL) return head;
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

// AIM :
int main()
{
    int n;
    cin >> n;

    return 0;
}