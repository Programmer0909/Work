#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(make_pair(a,i+1));
    }
    while (q.size()!=1)
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        a-=m;
        if(a>0) q.push(make_pair(a,b));
    }
    cout << q.front().second ;

    return 0;
}