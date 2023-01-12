#include <bits/stdc++.h>
using namespace std;
vector<int> decToBinary(int n){
    vector<int> binaryNum;int i = 0;
    while (n > 0){
        int a;a = n % 2;
        binaryNum.push_back(a);
        n = n / 2;i++;}
    return binaryNum;}
int main(){
    int n;cin >> n;
    vector<int> v = decToBinary(n);
    for (int j = v.size() - 1; j >= 0; j--) if (v[j]) cout << j+1 << " ";
    return 0;}