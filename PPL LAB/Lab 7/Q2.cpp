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

void insertaty(Node *&head, int a)
{
    int ct = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ct++;
    }
    int n = ((ct / 2) + 2);
    temp = head;
    int yl = 1;
    while (yl < (n - 1))
    {
        temp = temp->next;
        yl++;
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
    Node *head = NULL;
    for (int i = 1; i <= 10; i++)
        insertathead(head, 2 * i * 10);
    printll(head);
    insertaty(head, 1999);
    printll(head);
    return 0;
}
