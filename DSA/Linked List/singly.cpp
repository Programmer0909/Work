#include <bits/stdc++.h>
using namespace std;

// AIM :

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

void deletionatmiddle(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int ct = 1;
        Node *curr = head;
        Node *prev = NULL;
        while (ct <= position)
        {
            prev = curr;
            curr = curr->next;
            ct++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertattail(tail, 2);
    insertattail(tail, 3);
    insertattail(tail, 4);
    cout << "Insertion at tail" << endl;
    printll(head);

    insertathead(head, 10);
    insertathead(head, 20);
    insertathead(head, 30);
    cout << "Insertion at head" << endl;
    printll(head);

    insertatmiddle(head, 3, 12);
    cout << "Insertion at middle" << endl;
    printll(head);

    insertatmiddle(head, 4, 34);
    cout << "Insertion at middle" << endl;
    printll(head);
    insertatmiddle(head, 5, 67);
    cout << "Insertion at middle" << endl;
    printll(head);
    cout << "Deletion" << endl;
    deletionatmiddle(head, 3);
    printll(head);
    deletionatmiddle(head, 1);
    printll(head);
    // rev(head);
    cout << "Reversed List" << endl;
    printll(tail);

    cout << "Pratham Pali " << endl
         << "211112254" << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int a)
//     {
//         this->data = a;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };

// void insertathead(Node *&head, int n, Node *&tail)
// {
//     int x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         Node *temp = new Node(x);
//         if (i != 0)
//             temp->next = head;
//         head = temp;
//     }
// }
// void insertattail(Node *&head, int n, Node *&tail)
// {
//     int x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         Node *temp = new Node(x);
//         if (i != 0)
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//         else
//         {
//             head = tail = temp;
//         }

//     }
// }
// void pri(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // AIM :
// int main()
// {
//     int n;
//     cin >> n;
//     Node *head = NULL;
//     Node *tail = NULL;
//     insertattail(head, n, tail);
//     pri(head);
//     return 0;

// }

/*
struct node{
char value;
struct node * next;
};
void rearrange (struct node * list)
{
struct node *p, *q;
char temp;
if(!list || !list  next ) return;
p = list; q = list  next;
while (q) {
    temp = p  value;
p  value = q  value;
q  value = temp;
p = q  next;
q = p ? p  next : 0;
}
}
*/