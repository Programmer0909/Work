#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    string n;
    cin>>n;
    unordered_set <char> s;
    for (int i = 0; i < n.length(); i++) s.insert(n[i]);
    (s.size()%2==0)?(cout << "CHAT WITH HER!"):(cout << "IGNORE HIM!");
    return 0;
}