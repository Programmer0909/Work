#include <bits/stdc++.h>
using namespace std;


void gen(int n){
    queue <string> q;
    q.push("5");
    q.push("6");
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.push(q.front()+"5");
        q.push(q.front()+"6");
        q.pop();
    }
    
}













//AIM : 
int main(){
    int n;
    cin>>n;
    gen(n);
    return 0;
}