#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int a)
    {
        key = a;
        left = NULL;
        right = NULL;
    }
};
int ct = 0;
void postorder(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return;
    postorder(temp->left);
    postorder(temp->right);
    ct++;
}

int maximum(Node *head)
{
    if (head == NULL)
        return INT_MIN;
    return max(head->key, max(maximum(head->left), maximum(head->right)));
}



int main()
{
    // Creating a tree
    Node *root = new Node(10);
    Node *no1 = new Node(20);
    Node *no2 = new Node(30);
    root->left = no1;
    root->right = no2;
    no1->left = new Node(80);
    no1->right = new Node(50);
    // no2->left = new Node(60);
    no2->right = new Node(70);
    // postorder(root);
    cout << maximum(root) << endl;
    return 0;
}