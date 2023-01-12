#include <bits/stdc++.h>
using namespace std;

//AIM : we know floor of log of a number + 1 gives no. of digit in that number
int main(){
    int n ;
    cin>>n;
    float r;
    for (int i = 1; i <= n; i++)
    {
        r=r+log10(i);
    }
    cout<<(int)r+1;
    return 0;
}