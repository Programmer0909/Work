#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int amount;
    cin >> amount;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    vector<int> coins_returned;
    for (int i = n - 1; i >= 0; i--)
    {
        int coins = v[i].first;
        int avail = v[i].second;
        while (amount >= coins and avail > 0)
        {
            amount -= coins;
            avail--;
            coins_returned.push_back(coins);
        }
    }
    if (amount > 0)
    {
        cout << "cannot be returned";
    }
    else
    {
        cout << "Total coins returned: " << coins_returned.size() << endl;
        for (int i = 0; i < coins_returned.size(); i++)
        {
            cout << coins_returned[i] << " ";
        }
    }
    return 0;
}

