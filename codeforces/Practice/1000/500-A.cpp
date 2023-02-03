#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n+1];
    for (int i = 1; i <=n; i++) cin >> arr[i];
    int i =1;
    while (i<d) i+=arr[i];
    (i==d)?(cout << "YES" ) :(cout << "NO");
    
    return 0;
}