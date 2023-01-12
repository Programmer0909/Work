// #include <bits/stdc++.h>
// using namespace std;
// #define int int long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl

// int ch()
// {
//     int n,a=0,b=0,c=0,x=0,y=0,z=0, ct = 0, res = 0, maxi = 0, mini = 0;
//     string s,temp;
//     cin >> s >> temp;
//     int arr[26]={0};
//     int ar[32]={0};
//     for (int i = 0; i < s.length(); i++) arr[s[i]-'A']=i+1;

//     for (int i = 0; i < 26; i++)
//     {
//       cout << char(i)+'A' << " " << arr[i] << endl;
//     }
//     // cout << endl;
//     // for (int i = 0; i < temp.length(); i++) ar[i]=arr[temp[i]-'A'];

//     // for (int i = 0; i < temp.length(); i++)
//     // {
//     //   cout << ar[i] << " ";
//     // }
//     // for (int i = 1; i < temp.length(); i++) if(ar[i]<ar[i-1]) {cout << "NO" el; return 0;}
//     // cout << "YES" el;
//     return 0;
// }
// // DEINSTITUTIONALIZATION DONATION
// int32_t main()
// {
//     std::cout << std::fixed << std::setprecision(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) ch();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl

int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }

    return max_count;
}
int ch()
{
    int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxi = mostFrequent(arr, n);
    if(n==1) {cout << 0 << endl;return 0;}
    if(maxi==n) {cout << 0 << endl;return 0;}
    // cout << maxi <<endl;
    z = 0;
    x = maxi;
    int yoyo=0;
    while (z < n)
    {
        if (x == 0)
        {
            x = 2 * yoyo;
            z++;
        }
        else
        {
            if (x >= (n - z))
            {
                x -= (n - z);
                z += abs(n - z);
            }
            else
            {
                yoyo=x;
                z += x;
                x=0;
            }
        }
    }
    cout << z << endl;

    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}