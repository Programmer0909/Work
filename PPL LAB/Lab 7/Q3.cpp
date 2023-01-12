#include <bits/stdc++.h>
using namespace std;
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
void deletionatmiddle(Node *&head, int position){
    if (position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;}
    else{
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
        delete curr;}}


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
    for (int i = 1; i <= 10; i++) insertathead(head, 2 * i * 10);
    printll(head);
    deletionatmiddle(head,1);
    printll(head);
    return 0;
}
