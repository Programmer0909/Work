#include <bits/stdc++.h>
using namespace std; 
int main(){
    string n;
    cin>>n;
    bool arr[4]={false,false,false,false};
    if (n.length()>4) arr[0]=true;
    for (int i = 0; i < n.length(); i++){
        if (n[i]>64 && n[i]<91) arr[1]=true;
        else if (n[i]>96 && n[i]<123) arr[2]=true;
        else if (n[i]>46 && n[i]<58) arr[3]=true;}
    for (int i = 0; i < 4; i++){
        if (!arr[i]){
            cout << "Too weak";
            return 0;}}
    cout << "Correct" ;
    return 0;}