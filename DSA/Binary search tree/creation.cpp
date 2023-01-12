#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int a)
    {
        this->data = a;
        this->left = NULL;
        this->right = NULL;
    }
};

// INSERTING A NODE

Node *insert(Node *root, int a)
{
    if (root == NULL)
    {
        Node *temp = new Node(a);
        // cout << temp->data << " is inserted "<<endl;
        return temp;
    }
    if (a < root->data)
        root->left = insert(root->left, a);
    else
        root->right = insert(root->right, a);
}

// CREATING A TREE

Node *create(Node *root)
{
    int a;
    cin >> a;
    while (a != -1)
    {
        root = insert(root, a);
        cin >> a;
    }
    return root;
}

// SEARCHING AN ELEMENT IN A TREE

bool search(Node *root, int x)
{
    bool flag = false;
    if (root == NULL)
        return flag;
    if (root->data == x)
    {
        flag = true;
        return flag;
    }

    if (flag == false)
    {
        if (root->data > x)
            search(root->left, x);
        else
            search(root->right, x);
    }
}

// MINIMUM VALUE FROM A TREE

Node *minval(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL) temp = temp->left;
    return temp;
}

// MAXIMUM VALUE FROM A TREE

Node *maxval(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
        temp = temp->right;
    return temp;
}

// DELETING AN ELEMENT FROM A TREE

Node *deleteele(Node *root, int x)
{
    if (root == NULL)
        return root;

    if (root->data == x)
    {
        // LEAF NODE (ZERO CHILD)

        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 CHILD

        else if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 CHILD

        else if (root->left != NULL && root->right != NULL)
        {
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deleteele(root->right, mini);
            return root;
        }
    }

    else
    {
        if (x < root->data)
            root->left = deleteele(root->left, x);
        else
            root->right = deleteele(root->right, x);
    }
}

// TRAVERSAL

void inorder(Node *&root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// AIM :
int main()
{
    Node *root = NULL;

    // CREATING A TREE

    root = create(root);

    // PRINTING A TREE

    inorder(root);
    cout << endl;

    // SEARCHING A TREE

    int x;
    cin >> x;
    // cout << "DH";
    if (search(root, x) == true)
        cout << "YES";
    else
        cout << "NO";

    // DELETING AN ELEMENT FROM A TREE

    deleteele(root, x);
    cout << endl;
    inorder(root);

    cout << endl
         << minval(root)->data;
    cout << endl
         << maxval(root)->data;

    return 0;
}