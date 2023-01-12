#include <bits/stdc++.h>
using namespace std;
class twost
{
public:
    int cap, top1 = -1, top2;
    twost(int n)
    {
        cap = n;
        top2 = cap;
    }
    stack<int> s1;
    stack<int> s2;
    int arr[];
    void push1(int el)
    {
        if (top1 < top2 - 1)
            s1.push(el);
        top1++;
    }
    void push2(int el)
    {
        if (top1 < top2 - 1)
            s2.push(el);
        top2--;
    }
};

void twostack(int n, int arr[])
{
    int cap = n, top1 = -1, top2 = cap;
    stack<int> s1;
    stack<int> s2;
}

// AIM :
int main()
{
    int n;
    cin >> n;
    return 0;
}