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
void inorder(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}
void preorder(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return;
    cout << temp->key << " ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->key << " ";
}
// AIM :
int main()
{
    int n;
    cin >> n;
// Traversal of tree

    // inorder(root);
    // cout << endl;
    // preorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    return 0;
}