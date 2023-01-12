#include <bits/stdc++.h>
using namespace std;

int arr[100][100]={0};

void add(int a , int b){
    arr[a][b]=1;
    arr[b][a]=1;
}

void add_mat(int n){
    int m;
    cin >> m;
    while(m--){
        int a , b;
        cin >> a >> b;
        add(a,b);
    }
}

void display(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    add_mat(n);
    display(n);
    return 0;
}