    #include <bits/stdc++.h>
    using namespace std;

    // AIM :
    int main()
    {
        int n, maxi = 0;
        string s, ans = "";
        cin >> n >> s;
        for (int i = 0; i < n - 1; i++)
        {
            int ct = 1;
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            // cout << temp <<endl;
            for (int j = i + 1; j < n-1; j++)
            {
                string pay = "";
                pay += s[j];
                pay += s[j + 1];
                if (temp == pay)
                    ct++;
            }
            // cout << temp << " " << ct << endl;
            // maxi=max(maxi,ct);
            if (ct > maxi)
            {
                maxi = ct, ans = temp;
            }
        }
        // cout << maxi << endl;
        cout << ans << endl;

        return 0;
    }