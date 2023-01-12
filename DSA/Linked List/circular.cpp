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

void insert(Node *&tail, int element, int a)
{
    if (tail == NULL)
    {
        Node *temp = new Node(a);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
            curr = curr->next;
        Node *temp = new Node(a);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void del(Node *&tail, int element)
{
    if (element == 1)
    {
        Node *temp = tail;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = tail;
        Node *prev = tail;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void prt(Node *&tail)
{
    Node *curr = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != curr);
    cout << endl;
    cout << endl;
}

// AIM :
int main()
{
    cout << "INSERT AT ANY PLACE IN A LIST" << endl;
    Node *tail = NULL;
    insert(tail, 4, 1);
    insert(tail, 10, 20);
    insert(tail, 20, 30);
    insert(tail, 30, 40);
    insert(tail, 10, 11);
    insert(tail, 20, 22);
    insert(tail, 30, 33);
    prt(tail);

    cout << "DELETE FROM ANY PLACE IN A LIST" << endl;
    del(tail, 11);
    prt(tail);
    del(tail, 22);
    prt(tail);
    del(tail, 40);

    prt(tail);

    return 0;
}