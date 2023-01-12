#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        int i = 0, t = s.top();
        while (i < ceil((sizeOfStack) / 2))
        {
            s.top()--;
            i++;
        }
        s.pop();
        s.top()=t;
    }
};
// AIM :
int main()
{
    int n;
    cin >> n;

    return 0;
}