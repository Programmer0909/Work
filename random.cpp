#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

class Node
{
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;
};

vector<int> levelOrder(Node *root)
{
    // Your code here
    queue<Node *> q;
    q.push(root);
    vector<int> v;

    while (!q.empty())
    {

        v.push_back(q.front()->data);
        q.pop();

        if (root->left != NULL)
            q.push(root->left);
        if (root->right != NULL)
            q.push(root->right);
    }

    return v;
}

int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;

    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;

    while (t--)
        ch();
    return 0;
}