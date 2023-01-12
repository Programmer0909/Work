#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
node *minval(node *root)
{
    node *temp = root;

    while (temp->left != NULL) temp = temp->left;
    return temp;
}

// MAXIMUM VALUE FROM A TREE

node *maxval(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
        temp = temp->right;
    return temp;
}

// DELETING AN ELEMENT FROM A TREE

node *deleteele(node *root, int x)
{
    if (root == NULL)
        return root;

    if (root->data == x)
    {
        // LEAF node (ZERO CHILD)

        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 CHILD

        else if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
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
int height(node *root)
{
    if (root == NULL)
        return 0;
    return (max(height(root->left), height(root->right)) + 1);
}

int ct = 0;
void size(node *root)
{
    node *temp = root;
    if (temp == NULL)
        return;
    size(temp->left);
    size(temp->right);
    ct++;
}
int clt = 0;

void lfct(node *root)
{
    if (root)
    {
        node *temp1 = root;
        if (temp1->left == NULL && temp1->right == NULL)
            clt++;
        lfct(temp1->left);
        lfct(temp1->right);
    }
}

int main()
{

    node *root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root);

    cout << endl << "preorder traversal is:  ";
    preorder(root);

    cout << endl << "postorder traversal is:  ";
    postorder(root);
    */

    return 0;
}