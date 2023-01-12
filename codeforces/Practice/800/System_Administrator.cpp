#include <bits/stdc++.h>
using namespace std;
#define long long ll;
int main(){
    int t, ct1 = 0, ct2 = 0, sum1 = 0, sum2 = 0;
    cin >> t;
    while (t--){
        int n, x, y;
        cin >> n >> x >> y;
        if (n == 1){
            sum1 += x;
            ct1++;}
        else{
            sum2 += x;
            ct2++;}}
    (sum1>=ct1*5)?(cout << "LIVE" << endl):(cout << "DEAD" << endl);
    (sum2>=ct2*5)?(cout << "LIVE" << endl):(cout << "DEAD" << endl);
    return 0;}