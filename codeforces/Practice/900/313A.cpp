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
    ll int n, ct = 0, a = 0, t1, t2;
    cin >> n;
    t1 = t2 = n;
    if (n >= 0)
    {
        cout << n;
        return 0;
    }
    else
    {
        a = (-1) * (n % (10));
        // cout << a el;
        t1 /= 100;
        // cout << t1 el;
        t1 *= 10;
        // cout << t1 el;

        t1 -= a;
        // cout << t1 el;

        t2 /= 10;
    }
    // cout << t1;
    cout << max(n, max(n / 10, t1));
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// //AIM :
// int main(){
//     int n;
//     cin>>n;
//     cout << (-1)*(n%(10));
//     return 0;
// }