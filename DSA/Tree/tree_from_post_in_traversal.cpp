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

int indi(int in[], int n, int ele)
{
    for (int i = n - 1; i > 0; i--)
        if (in[i] == ele)
            return i;
    return -1;
}

Node *solve(int post[], int in[], int n, int &index, int startpos, int endpos)
{
    if (index < 0 || startpos > endpos)
        return NULL;

    int ele = post[index--];
    Node *root = new Node(ele);
    int position = indi(in, n, ele);

    root->right = solve(post, in, n, index, position + 1, endpos);
    root->left = solve(post, in, n, index, startpos, position - 1);

    return root;
}

Node *tree_from_post_in_traversal(int post[], int in[], int n)
{
    int index = n - 1;
    Node *res = solve(post, in, n, index, n - 1, 0);
    return res;
}

int main()
{
    int n;
    cin >> n;
    return 0;
}