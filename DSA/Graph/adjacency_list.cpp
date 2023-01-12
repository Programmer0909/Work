#include <bits/stdc++.h>
using namespace std;
void add(vector <int> arr[] , int i ,int j){
    arr[i].push_back(j);
    arr[j].push_back(i);
}
int main(){
    int n,z;
    cin>>n>>z;
    vector <int> arr[n];
    while(z--){ 
        int m , n;
        cin >> m >> n;
        add(arr , m , n);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for(auto j : arr[i]) cout << j << " ";
        cout << endl;
    }
    return 0;
}