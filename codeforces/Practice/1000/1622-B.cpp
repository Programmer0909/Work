    #include <bits/stdc++.h>
    using namespace std;
    // #define int int long long
    #define vi vector<long long int>
    #define mi map<long long int, long long int>
    #define vii vector<long long int, long long int>
    #define el << endl

    int ch()
    {
        int n, a = 0,  c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
        string s;
        cin >> n;
        int arr[n] ;
        int b[n];
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b[i]=arr[i];
            m[arr[i]]=i;
        }
        cin >> s;
        vector<int> ones;
        vector <int> zeros;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones.push_back(arr[i]);
            else
                zeros.push_back(arr[i]);
        }
        sort(ones.begin(), ones.end(), greater<int>());
        sort(zeros.begin(), zeros.end(), greater<int>());
        sort(arr, arr + n, greater<int>());
        int i;
        for (i = 0; i < ones.size(); i++) b[m[ones[i]]]=arr[i];

        for (int j = 0; j < zeros.size(); j++) b[m[zeros[j]]]=arr[i],i++;
        
        for (int i = 0; i < n; i++)
        {
        cout << b[i] << " ";
        } 
        cout el;
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