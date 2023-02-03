#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<int>
#define mi map<int, int>
#define vii vector<int, int>
#define el << endl
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int ch()
{
    int n, ct0 = 0, ct1 = 0, ct2 = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n;
    int arr[n];
    vector <int> a={0,0,0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 3 == 0)
            a[0]++;
        else if (arr[i] % 3 == 1)
            a[1]++;
        else if (arr[i] % 3 == 2)
            a[2]++;
    }

    // if (ct0 > (n / 3))
    //     res += abs(n / 3 - ct0);
    // if (ct1 > (n / 3))
    //     res += abs(n / 3 - ct1);
    // if (ct2 > (n / 3))
    //     res += abs(n / 3 - ct2);
    // cout << "res " << res << endl;
    // a[0] =  ct0 -  n / 3 ;
    // a[1] =  ct1 -  n / 3 ;
    // a[2] =  ct2 -  n / 3 ;

    // for (int i = 0; i < 3; i++)
    // {
    //   cout << a[i] << " ";
    // }
    // cout << endl;
    // // for (int i = 1; i <= 3; i++)
    // {
    //     if (a[i]!=0 && a[i]>0) a[(i+1)%]+=a[i] , a[i]=0;
    // }
    // int t1 = 0 , t2 = 0 , t3 = 0;
    // if (a[0]!=0 && a[0]>0) t1+=a[0] , a[0]=0;
    // if (a[1]!=0 && a[1]>0) t2+=a[1] , a[1]=0;
    // if (a[2]!=0 && a[2]>0) t3+=a[2] , a[2]=0;
    // a[0]=t1;
    // a[1]=t2;
    // a[2]=t3;

    // if (a[0]!=0 && a[0]>0) t2=a[0] , res+=a[0] , a[0]=0;
    // if (a[1]!=0 && a[1]>0) t3=a[1] , res+=a[1] , a[1]=0;
    // if (a[2]!=0 && a[2]>0) t1=a[2] , res+=a[2] , a[2]=0;

    while (*min_element(a.begin(), a.end()) != n / 3)
        for (int i = 0; i < 3; i++)
            if (a[i] > (n / 3))
                res++, a[i]--, a[(i + 1) % 3]++;

    cout << res << endl;

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