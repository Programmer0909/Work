#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        // Your Code here
        Node *temp1 = r1;
        Node *temp2 = r2;
        if (temp1 == NULL || temp2 == NULL)
            return true;

        if (temp1!= temp2)
            return false;
        else
            return true;
        isIdentical(temp1->left, temp1->right);
    }
};

// AIM :
int main()
{
    int n;
    cin >> n;

    return 0;
}
