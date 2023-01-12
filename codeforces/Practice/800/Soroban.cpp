#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
#define ce cout << endl
int main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n, ct = 0;
    cin >> n;
    if (n == 0){
        cout << "O-|-OOOO";
    return 0;}
    while (n)
    {
        ct = n % 10;
        ll int temp;
        if (ct >= 5)
        {
            cout << "-O|";
            ct -= 5;
        }
        else
        {
            cout << "O-|";
        }
        // ct=abs(5-ct);
        for (int i = 0; i < ct; i++)
            cout << "O";
        cout << "-";
        temp = 4 - ct;
        for (int i = 0; i < temp; i++)
            cout << "O";
        n /= 10;
        ce;
    }
    return 0;
}