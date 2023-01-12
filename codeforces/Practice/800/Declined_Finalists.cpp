#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,maxi=0;
    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++){
        cin >> arr[i];
        maxi=max(maxi,arr[i]);}
    if (maxi-25>=0) cout << maxi-25;
    else cout << 0;
    return 0;
}