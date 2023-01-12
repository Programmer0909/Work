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
    ~Node()
    {
        this->left = NULL;
        this->right = NULL;
    }
};
int findpos(int in[], int ele, int n)
{
    for (int i = 0; i < n; i++)
        if (in[i] == ele)
            return i;
    return -1;
}
Node *solve(int in[], int pre[], int n, int &index, int startpre, int endpre)
{
    if (index >= n || startpre > endpre)
        return NULL;
    int ele = pre[index++];
    Node *root = new Node(ele);
    int pos = findpos(in, ele, n);
    root->left = solve(in, pre, n, index, startpre, pos - 1);
    root->right = solve(in, pre, n, index, pos + 1, endpre);
    return root;
}

Node *tree_from_pre_in_traversal(int in[], int pre[], int n)
{
    int index = 0;
    Node *ans = solve(in, pre, n, index, 0, n - 1);
    return ans;
}

// AIM :
int main()
{
    int n;
    cin >> n;
    return 0;
}

// C++ program to construct a tree using
// inorder and preorder traversal
// #include <bits/stdc++.h>
// using namespace std;

// class TreeNode
// {
// public:
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) { val = x; }
// };

// set<TreeNode *> s;
// stack<TreeNode *> st;

// // Function to build tree using given traversal
// TreeNode *buildTree(int preorder[], int inorder[], int n)
// {

//     TreeNode *root = NULL;
//     for (int pre = 0, in = 0; pre < n;)
//     {

//         TreeNode *node = NULL;
//         do
//         {
//             node = new TreeNode(preorder[pre]);
//             if (root == NULL)
//             {
//                 root = node;
//             }
//             if (st.size() > 0)
//             {
//                 if (s.find(st.top()) != s.end())
//                 {
//                     s.erase(st.top());
//                     st.top()->right = node;
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.top()->left = node;
//                 }
//             }
//             st.push(node);
//         } while (preorder[pre++] != inorder[in] && pre < n);

//         node = NULL;
//         while (st.size() > 0 && in < n &&
//                st.top()->val == inorder[in])
//         {
//             node = st.top();
//             st.pop();
//             in++;
//         }

//         if (node != NULL)
//         {
//             s.insert(node);
//             st.push(node);
//         }
//     }

//     return root;
// }

// // Function to print tree in Inorder
// void printInorder(TreeNode *node)
// {
//     if (node == NULL)
//         return;

//     /* first recur on left child */
//     printInorder(node->left);

//     /* then print the data of node */
//     cout << node->val << " ";

//     /* now recur on right child */
//     printInorder(node->right);
// }

// // Driver code
// int main()
// {
//     int in[] = {10, 11, 12, 15, 16, 18, 19, 20};
//     int pre[] = {15, 10, 12, 11, 20, 18, 16, 19};
//     int len = sizeof(in) / sizeof(int);

//     TreeNode *root = buildTree(pre, in, len);

//     printInorder(root);
//     return 0;
// }
