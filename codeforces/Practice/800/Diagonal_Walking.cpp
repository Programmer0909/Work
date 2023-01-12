#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int x;cin>>x;
    string n;
    cin>>n;
    int ct=0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i]!=n[i+1])
        {
            ct++;i++;
        }
        else ct++;
    }
    cout << ct;
    return 0;
}