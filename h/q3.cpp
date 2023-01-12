#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (a == b)
        {
            cout << "-1" << endl;
            continue;
        }
        int p;
        if (n % a == 0)
        {
            p = n;
        }
        else
        {
            p = (n / a) + a;
        }
        while (true)
        {
            if (p % a == 0 && p % b != 0)
            {
                cout << p << endl;
                
            }
        }
    }
    return 0;
}
