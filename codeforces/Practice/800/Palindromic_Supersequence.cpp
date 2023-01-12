#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main()
{
    // std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n;
    cin >> n;
    cout << n;
    for (int i = n.length()-1; i >=0; i--)
    {
        cout << n[i];
    }
    
    return 0;
}