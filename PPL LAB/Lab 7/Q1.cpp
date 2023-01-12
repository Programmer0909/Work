#include <bits/stdc++.h>
using namespace std;

// AIM :

class Node
{
public:
    int a;
    Node *next;
    Node(){};
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
        cout << "memory free for node with data " << val << endl;
    }
};

void insertathead(Node *&head, int a)
{
    Node *temp = new Node(a);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int a)
{
    Node *temp = new Node(a);
    tail->next = temp;
    tail = tail->next;
}
void insertatmiddle(Node *&head, int position, int a)
{
    if (position == 1)
    {
        insertathead(head, a);
        return;
    }

    Node *temp = head;
    int ct = 1;
    while (ct < (position - 1))
    {
        temp = temp->next;
        ct++;
    }
    if (temp->next == NULL)
    {
        insertattail(temp, a);
        return;
    }

    Node *nodetoinsert = new Node(a);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->a << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    for (int i = 1; i <= 10; i++)
        insertathead(head, 2 * i * 10);
    // for (int i = 1; i <= 10; i++)
    printll(head);

    return 0;
}
