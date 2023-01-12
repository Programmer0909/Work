#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>

using namespace std;

// AIM : TO COUNT THE FREQ OF CHAR OCCURING MAXIMUM TIMES
// METHOD 1
// int main()
// {
//     int leni = 1, max = 1;
//     char ch;
//     string s1 = "jhddjkfhsadwfuiwndskbfadsjgwribwf";
//     sort(s1.begin(), s1.end());
//     cout << s1 << endl;
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if (s1[i] == s1[i + 1])
//         {
//             leni++;
//             if (leni >= max)
//             {
//                 max = leni;
//                 ch = s1[i];
//             }
//         }
//         else
//         {
//             leni = 1;
//         }
//     }

//     cout << max << endl;
//     cout << ch << endl;
//     return 0;
// }

// METHOD 2

int main()
{
    string s1 = "jhddjkfhsadwfuiwndskbfadsjgwribwf";
    char freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0; // PURI ARRAY KO ZERO SE INITIALIZE KAR DIYA
    }
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++; // ANDAR WALE INDEX ME JA KE EK ADD KAR DO
    }
    int max = 0;
    char ch;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= max)
        {
            max = freq[i];
            ch = i + 'a';
        }
    }
    cout << max << endl
         << ch;
}