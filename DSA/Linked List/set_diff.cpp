#include <bits/stdc++.h>
using namespace std;

//AIM : 

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


void set_diff(Node*&head1 , Node*&head2 , Node*&head3){
    Node *temp1=head1;
    Node *temp2=head2;
    Node *temp3=head3;
    while (temp1!=NULL && temp2!=NULL)
    {
        if(temp1->a == temp2->a){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if (temp1->a > temp2->a)
        {
            temp2=temp2->next;
        }
        else
        {
            insertatmiddle(temp3,1,temp1->a);
        }
        
    }
    // return temp3;
    
}

int main(){
    // int n;
    // cin>>n;
    Node *head1;
    Node *head2;
    Node *head3;
    for (int i = 0; i < 5; i++)
    {
        insertathead(head1 , i+1);
        insertathead(head2 , i+3);

    }
    set_diff(head1,head2,head3);


    return 0;
}
