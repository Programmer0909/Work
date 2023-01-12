#include <bits/stdc++.h>
using namespace std;

// AIM :

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int a)
    {
        this->data = a;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// INSERT AT HEAD
void insertathead(Node *&head, int a)
{
    Node *temp = new Node(a);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// INSERT AT TAIL

void insertattail(Node *&tail, int a)
{
    Node *temp = new Node(a);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

// INSERT AT A POSITION

void insertatmiddle(Node *&tail, Node *&head, int a, int pos)
{
    // INSERTING AT HEAD
    if (pos == 0)
    {
        insertathead(head, a);
        return;
    }

    int ct = 1;
    Node *nti = new Node(a);
    Node *temp = head;

    while (ct < pos)
    {
        temp = temp->next;
        ct++;
    }
    // INSERT AT TAIL
    if (temp->next == NULL)
    {
        insertattail(tail, a);
        return;
    }

    nti->next = temp->next;
    temp->next->prev = nti;
    temp->next = nti;
    nti->prev = temp;
}

// DELETION OF NODE

void del(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        int ct = 1;

        Node *curr = head;
        Node *previ = NULL;
        while (ct < pos)
        {
            previ = curr;
            curr = curr->next;
            ct++;
        }
        curr->next->prev = previ->next;
        previ->next = curr->next;
        curr->next = NULL;
        curr->prev = NULL;
    }
}

// PRINTING THE LINKED LIST

void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    printll(head);

    // INSERT AT HEAD

    // insertathead(head, 2);
    // printll(head);
    // insertathead(head, 3);
    // printll(head);

    // INSERT AT TAIL

    insertattail(tail, 4);
    printll(head);

    insertattail(tail, 5);
    printll(head);

    insertatmiddle(tail, head, 10, 3);
    printll(head);
    del(head, 2);
    printll(head);
    del(head, 2);
    printll(head);
    return 0;
}