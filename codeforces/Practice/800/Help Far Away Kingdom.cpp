#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int i = 0,lm=0;
    for (i = 0; i < n.length(); i++) if (n[i] == '.') break;
    if (n[i-1]=='9')  {cout << "GOTO Vasilisa." << endl;
    return 0;}
    else if (n[i+1]<'5') lm=i-1;
    else if (n[i+1]>='5') {
        n[i-1]++;
        lm=i-1;}
    for (int i = 0; i < lm+1; i++) cout << n[i];
    return 0;}