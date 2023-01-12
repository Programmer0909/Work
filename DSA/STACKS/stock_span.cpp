#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        // Your code here
        int ct = 1;
        vector<int> v;
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.empty())
                s.push(price[i]);
            
        }
    }
};

// AIM :
int main()
{
    int n;
    cin >> n;

    return 0;
}