// // C++ recursive function to
// // solve tower of hanoi puzzle
// #include <bits/stdc++.h>
// using namespace std;

// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod
//          << " to rod " << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// // Driver code
// int main()
// {
//     int N;
//     cin >> N;
//     // A, B and C are names of rods
//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }

// // This is code is contributed by rathbhupendra

#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char s, char a, char d)
{
    if (n == 0) return ;
    tower_of_hanoi(n - 1, s, d, a);
    cout << "Move disk " << n << " from rod " << s << " to rod " << d << endl;
    tower_of_hanoi(n - 1, a, s, d);
}

// AIM :
int main()
{
    int n;
    cin >> n;
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}
