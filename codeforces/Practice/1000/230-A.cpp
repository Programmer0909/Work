#include <bits/stdc++.h>
using namespace std;

//AIM : 
bool cmp(pair<string, int>& a,
        pair<string, int>& b)
{
    return a.second < b.second;
}
int main(){
    int s,n;
    cin>>n;
    vector <pair<int,int>> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pair <int,int> p = make_pair(a,b);
        m.push_back(p);
    }
    sort(m.begin(),m.end());
    for(auto i : m){
        if(s<=i.first) {cout << "NO" ; return 0;}
        s=s-i.first+i.second;
    }
    cout << "YES";
    return 0;
}