#include <bits/stdc++.h>
using namespace std;

// AIM :
int main()
{
    string s;
    cin >> s;
    int i=0 , j =0;
    char arr[]= {'h' , 'e' , 'l' , 'l' , 'o'};
    while (j!=5 && i!=s.length())
    {
        if(s[i]==arr[j]) j++;
        i++;
    }
    // cout << i << endl << j << endl;
    if(j==5) cout << "YES" ;
    else cout <<"NO";
    


    
    return 0;
}