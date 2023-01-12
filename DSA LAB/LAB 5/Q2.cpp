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
void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
// AIM :
int main()
{
    // Creating a tree
    Node *root = new Node(10);
    Node *no1 = new Node(20);
    Node *no2 = new Node(30);
    root->left = no1;
    root->right = no2;
    no1->left = new Node(40);
    no1->right = new Node(50);
    // no2->left = new Node(60);
    no2->right = new Node(70);
    level_order_traversal(root);
    return 0;
}
