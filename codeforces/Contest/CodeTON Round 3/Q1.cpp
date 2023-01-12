#include <bits/stdc++.h>
using namespace std;

void check(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    (arr[0]==1)?(cout << "YES" << endl):(cout << "NO" << endl);
}









//AIM : 
int main(){
    int n;
    cin>>n;
    while (n--) check();
    return 0;
}