#include <bits/stdc++.h>
using namespace std;
vector<int> leftgrt(int arr[], int n){
    vector<int> v;
    stack<int> s;
    for (int i = n - 1; i >= 0; i--){
        while (s.empty() == false && arr[i] >= s.top()) s.pop();
        s.empty() ? v.push_back(-1) : v.push_back(s.top());
        s.push(arr[i]);}
    return v;}
// AIM :
int main(){
    int n = 8;
    int arr[n] = {5, 15, 10, 8, 6, 12, 9, 18};
    vector<int> v = leftgrt(arr, n);
    for (int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
    return 0;}