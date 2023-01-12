#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n;
    cin>>n;
    int a= n%7;
    switch (a)
    {
    case 0:
        cout << "Monday" << endl;
        break;
    case 1:
        cout << "Tuesday" << endl;
        break;
    case 2:
        cout << "Wednesday" << endl;
        break;
    case 3:
        cout << "Thursday" << endl;
        break;
    case 4:
        cout << "Friday" << endl;
        break;
    case 5:
        cout << "Saturday" << endl;
        break;
    case 6:
        cout << "Sunday" << endl;
        break;
    }
    return 0;
}