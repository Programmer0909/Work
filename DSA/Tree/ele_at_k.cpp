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

void ele_at_k(Node *root, int k)
{
    if (root == NULL)
        return;
    else if (k == 0)
        cout << root->key << " ";
    else
    {
        ele_at_k(root->left, k - 1);
        ele_at_k(root->right, k - 1);
    }
}

int main()
{
    // Creating a tree
    // First row
    Node *root = new Node(10);
    // Second row
    Node *no1 = new Node(20);
    Node *no2 = new Node(30);
    root->left = no1;
    root->right = no2;
    // Third row

    no1->left = new Node(40);
    no1->right = new Node(50);
    // no2->left = new Node(60);
    no2->right = new Node(70);
    ele_at_k(root, 2);
    return 0;
}