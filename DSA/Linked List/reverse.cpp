#include <iostream>
#include <math.h>
using namespace std;

// AIM :

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
};

// RECURSIVE SOLUTION

void reverse(Node *&head , Node *curr , Node *prev ){
    // BASE CASE
    if (curr==NULL)
    {
        prev = head;
        return ;
    }
    reverse(head ,curr->next ,curr);
    curr->next = prev;
}



// ITERATIVE SOLUTION
Node *rev(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void insertatll(Node *&head, int a)
{
    Node *temp = new Node(a);
    head->next = temp;
    temp->next = NULL;
    head = temp;
}

void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp << " ";
        temp = temp->next;
    }
}

int main()
{

    int n;
    cin >> n;
    Node *temp = new Node(1);
    Node *head = temp;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        insertatll(head, m);
    }
    printll(head);

    return 0;
}