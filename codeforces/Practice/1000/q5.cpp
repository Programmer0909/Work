#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int ch()
{
    int n,a=0,b=0,c=0,x=0,y=0,z=0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
      cin>>arr[i];
    }
    int j=0;
    while (n>0)
    {
        n-=arr[j];
        ct=j++;
        j=j%7;
    }
    cout << ct+1 el;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ch();
    return 0;
}