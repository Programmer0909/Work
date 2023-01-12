// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     string n;
// //     cin >> n;
// //     int v = 0, c = 0;
// //     for (int i = 0; i < n.length(); i++){
// //         if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u') ++v;
// //         else ++c;}
// //     cout << v << " " << c;
// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, index = 0;
        cin >> n;
        int v1[n],v2[n];
        for (int i = 0; i < n; i++)
        {
          cin>>v1[i];
        }
        for (int i = 0; i < n; i++)
        {
          cin>>v2[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (v1[i]*v2[i]>v1[index]*v2[index])
            {
                index=i;
            }
            else if (v1[i]*v2[i]==v1[index]*v2[index])
            {
                if (v2[i]>v2[index])
                {
                    index=i;
                }
                
            }
            
        }
        cout << index + 1<< endl;
    }
    return 0;
}

// movie-weekend
// Kanstantsin Sokal
// AC

// #include <bits/stdc++.h>

// using namespace std;

// const int MAX_N = 101;

// int l[MAX_N];
// int r[MAX_N];

// void solve() {
//   int n; cin >> n;
//   for (int i = 0; i < n; i++) {
//     cin >> l[i];
//   }
//   for (int i = 0; i < n; i++) {
//     cin >> r[i];
//   }

//   int answer = 0;
//   for (int i = 1; i < n; i++) {
//     if (make_pair(l[answer] * r[answer], r[answer]) < make_pair(l[i] * r[i], r[i])) {
//       answer = i;
//     }
//   }

//   cout << answer + 1 << "\n";
// }

// int main() {
//   int cases; cin >> cases;

//   for (int i = 0; i < cases; i++) {
//     solve();
//   }

//   return 0;
// }