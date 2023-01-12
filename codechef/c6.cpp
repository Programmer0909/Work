#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool arr[7]={false};
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            if (s=="cakewalk")
            {
                arr[0]=true;
            }
            else if (s=="simple")
            {
                arr[1]=true;
            }
            else if (s=="easy")
            {
                arr[2]=true;
            }
            else if (s=="easy-medium")
            {
                arr[3]=true;
            }
            else if (s=="medium")
            {
                arr[4]=true;
            }
            else if (s=="medium-hard")
            {
                arr[5]=true;
            }
            else if (s=="hard")
            {
                arr[6]=true;
            }
    }
    if (arr[0] && arr[1] && arr[2] && (arr[3] || arr[4]) && (arr[5] || arr[6]))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    }
    return 0;
}
