#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp[arr[i]];
        int res=0;
        for (int j = 0; j < arr[i]; j++)
        {
            cin >> temp[j];
            res+=temp[j];
        }
        int a = res*5 + arr[i]*15;
        v.push_back(a);
        
    }
    cout << *min_element(v.begin(),v.end());
    return 0;
}