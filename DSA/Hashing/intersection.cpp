#include <bits/stdc++.h>
using namespace std;

// AIM :

class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        int ct = 0;
        unordered_set<int> s;
        if (n > m)
        {
            for (int i = 0; i < m; i++)
            {
                s.insert(b[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (s.find(a[i]) != s.end())
                {
                    ct++;
                    s.erase(a[i]);
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                s.insert(a[i]);
            }
            for (int i = 0; i < m; i++)
            {
                if (s.find(b[i]) != s.end())
                {
                    ct++;
                    s.erase(b[i]);
                }
            }
        }

        return ct;
    }
};
int main()
{

    return 0;
}