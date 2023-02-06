#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int a = s[i] - 48;
        int b = s[i+1] - 48;
        // cout << a << " " << b << "H" << endl;
        if (a+b >=10)
        {
            j = i;
            
        }
    }
    int t = s.length();
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        arr[i]=(int)(s[i]-48);
    }
    
    // for (int i = 0; i < t; i++)
    // {
    //   cout << arr[i] << " ";
    // }
    
    int a = s[j] - 48;
    int y = s[j + 1] - 48;
    a += y;
    // cout << a << " " << y << endl;
    if (a >= 10)
    {
        // s[j] = (char)(48 + a / 10);
        // s[j + 1] = (char)(48 + a % 10);
        arr[j]=a/10;
        arr[j+1]=a%10;
    }
    else
    {
        // s[j] = (char)(48 + a % 10);
        arr[j]=a;
        arr[j+1]=-1;
    }
    
    for (int i = 0; i < t; i++)
    {
      if(arr[i]!=-1) cout << arr[i];
    }
    cout << endl;
    j++;
    // s.erase(s.begin()+j);
    // cout << s << endl;
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    fast int t;
    cin >> t;
    while (t--)
        ch();
    return 0;
}