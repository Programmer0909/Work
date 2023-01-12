// #include <bits/stdc++.h>
// using namespace std;

// //AIM :
// int main(){
//     for (int i = 0; i < 50; i++)
//     {
//         int y=0;
//         while (i>(2*y))
//         {
//             cout << (i-(2*y))/y+2 << endl;
//             y++;
//         }

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        bool flag = false;
        for (int i = 1; i * i < a; i++)
        {
            if ((a - (2 * i)) % (i + 2) == 0 && a != (2 * i))
            {
                cout << "Yes" << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "No" << endl;
        }
    }

    return 0;
}