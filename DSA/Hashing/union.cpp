#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    vector <int> a={1,2,4,53,5,2,4,5,6,4,26,23};
    vector <int> b= {1,2,5,8,1,45,26,5,9,33};
    unordered_set <int> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(i);
    }
    for (int i = 0; i < b.size(); i++)
    {
        s.insert(i);
    }
    cout << s.size() << endl;
    return 0;
}