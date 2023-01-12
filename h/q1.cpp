#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        int ct_z=0,ct_o=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='0')
            {
                ct_z++;
            }
            else if (s[i]=='1')
            {
                ct_o++;
            }
        }
        if (ct_z>=ct_o)
        {
            for (int i = 0; i < ct_z; i++)
            {
                cout<<"1";
            }
            
        }
        else
        {
            for (int i = 0; i < ct_o; i++)
            {
                cout<<"0";
            }
        }
        cout<<endl;
        
    }
    return 0;
}
