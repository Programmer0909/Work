#include <bits/stdc++.h>
using namespace std;
int n,ct=0;
int pos(int index,string s,int d){
    for (int i = index+d; i >=index; i--)
    {
        
    }
    
}
//AIM : 
int main(){
    int d,index=0;
    cin>>n>>d;
    string s;
    cin >> s;
    while (index!=n-1)
    {
        index=pos(index,s,d);
    }
    
    return 0;
}