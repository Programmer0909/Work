#include <bits/stdc++.h>
using namespace std;

// AIM :

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n],mini=INT_MAX,mini_g=INT_MAX;
        // int arr[n];
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
          mini=min(mini,arr[i]);
        }
        for (int i = 0; i < n; i++)
        {   
            long long int r;
            r=gcd(arr[i],mini);
            mini_g=min(mini_g,r);
        }
        



        cout << mini_g*n<<endl;
    }

    return 0;
}