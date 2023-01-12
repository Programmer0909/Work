#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char arr[3][3]; 
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> arr[i][j];
    if(arr[0][0]==arr[2][2] && arr[0][1]==arr[2][1] && arr[0][2]==arr[2][0] && arr[1][0]==arr[1][2]) cout << "YES";
    else cout << "NO";
    return 0;
}