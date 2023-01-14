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

// IN O(H*N) TIME AND O(1) AUXILARY SPACE

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return (max(height(root->left), height(root->right)) + 1);
}

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

// void level_order_traversal(Node* root){
//     int h =height(root);
//     for (int i = 0; i < h; i++) ele_at_k(root , i);

// }

// IN O(N) TIME AND O(N) AUXILARY SPACE

void level_order_traversal(Node *root)
{
    stack <Node *> s;
    queue <Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        // cout << q.front()->key << " ";
        q.pop();
        s.push(curr);
        if (curr->right != NULL)
            q.push(curr->right);
        if (curr->left != NULL)
            q.push(curr->left);
    }

    while (s.empty()==false)
    {
        cout << s.top()->key << " ";
        s.pop();
    }
    
}

// IN O(N) TIME AND O(N) AUXILARY SPACE

void level_order_traversal_line_by_line(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            q.push(NULL);
            continue;
        }

        cout << curr->key << " ";
        if (curr->right != NULL)
            q.push(curr->right);
        if (curr->left != NULL)
            q.push(curr->left);
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
    // ele_at_k(root,2);
    // level_order_traversal(root);
    level_order_traversal(root);
    return 0;
}