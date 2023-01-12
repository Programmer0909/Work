#include <bits/stdc++.h>
using namespace std;

// AIM : Number of digits in a number


//                                  Iterative solution



// int main(){
//     int a, ct=0;
//     cin >> a;
//     while (a){
//         ct++;
//         a = a / 10;}
//     cout << ct;
//     return 0;
// }



//                                   Resursive solution


/*
int digi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + digi(n / 10);
}

int main()
{
    int a;
    cin >> a;
    cout << digi(a);
    return 0;
}*/



//                                     Lograthmic solution



int digi(int n){
    return floor(log10(n)+1);
}

int main(){
    int a;
    cin >> a;
    cout << digi(a);
    return 0;
}