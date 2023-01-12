#include <bits/stdc++.h>
using namespace std;
int main(){unsigned long long int n,k,d,c,no;cin>>n>>k;d=(n/2)/(k+1);c=d*k;no=n-d-c;cout << d << " "<< c << " "<< no;return 0;}