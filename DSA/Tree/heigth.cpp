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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return (max(height(root->left), height(root->right)) + 1);
}
// AIM :
void main()
{
    Node *root = new Node(10);
    cout << height(root) << endl;
}