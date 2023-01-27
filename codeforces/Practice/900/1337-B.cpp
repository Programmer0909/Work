    #include <bits/stdc++.h>
    using namespace std;
    #define int int long long
    #define vi vector< int>
    #define mi map< int,  int>
    #define vii vector< int,  int>
    #define el << endl
    #define fast ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
    int ch()
    {
        int n,h,a,b,res = 0, maxi = 0, mini = 0;
        string s;
        cin >> h >> a >> b;
        while (a--)
        {
            if(h<=(10*b)){cout << "YES" << endl;return 0;}
            h=(h/2)+10;
        }
            if(h<=(10*b)){cout << "YES" << endl;return 0;}
        cout << "NO" << endl;
        return 0;
    }

    int32_t main()
    {
        std::cout << std::fixed << std::setprecision(0);
        fast
        int t; cin >> t;
    
        while (t--) ch();
        return 0;
    }