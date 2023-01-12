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
        cout << "memory free for node with data " << val << endl;
    }
};

class Solution
{
public:
    Node *detectLoop(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && slow != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                return fast;
            }
        }
        return NULL;
    }

    Node *startofloop(Node *head)
    {
        Node *finish = detectLoop(head);
        if (finish == NULL)
        {
            return NULL;
        }

        Node *slow = head;
        while (slow != finish)
        {
            slow = slow->next;
            finish = finish->next;
        }
        return slow;
    }
    void removeloop(Node *head)
    {
        Node *start = startofloop(head);
        Node *temp = start->next;
        while (temp != start)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

// AIM :
int main()
{
    int n;
    cin >> n;

    return 0;
}