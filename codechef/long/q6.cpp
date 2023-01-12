#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        vector<int> arr;
        int p;
        for (int i = 0; i < n; i++)
        {   
            cin >> p;
            arr.push_back(p);
        }
        p=min(n,y);
        int j=0;
        while (y-- && j<n)
        {   
            int k=arr[j] ^ x;
            if(k>arr[j]){
                arr[j]=k;
                j++;
            }

        }
        



        sort(arr.begin(),arr.end());
        
        for (int i = 0; i < n; i++)
        {
          cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}