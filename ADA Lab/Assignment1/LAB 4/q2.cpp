#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->val;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

struct compare
{
    bool operator()(Node *a, Node *b)
    {
        return a->val > b->val;
    }
};
Node *mergeKSortedLists(Node *arr[], int K)
{
    priority_queue<Node *, vector<Node *>, compare> pq;

    for (int i = 0; i < K; i++)
        if (arr[i] != NULL)
            pq.push(arr[i]);
    if (pq.empty())
        return NULL;
    Node *temp = new Node(0);
    Node *chk = temp;
    while (!pq.empty())
    {
        Node *curr = pq.top();
        pq.pop();

        chk->next = curr;
        chk = chk->next;

        if (curr->next != NULL)

            pq.push(curr->next);
    }

    return temp->next;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int N = 3;

    int K = 4;

    Node *arr[N];

    arr[0] = new Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);

    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    arr[1]->next->next = new Node(6);
    arr[1]->next->next->next = new Node(8);

    arr[2] = new Node(0);
    arr[2]->next = new Node(9);
    arr[2]->next->next = new Node(10);
    arr[2]->next->next->next = new Node(11);

    Node *head = mergeKSortedLists(arr, N);

    printList(head);

    return 0;
}
