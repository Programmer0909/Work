#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, ct = 0, r, c;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) if (arr[i][j] == '*') ct++;
        if (ct == 1){
            r = i;
            ct = 0;
            break;}
        else ct = 0;}
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++) if (arr[i][j] == '*') ct++;
        if (ct == 1){
            c = j;
            ct = 0;
            break;}
        else ct = 0;}
    cout << r+1 << " " << c+1;
    return 0;}