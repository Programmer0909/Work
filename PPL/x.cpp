#include <bits/stdc++.h>
using namespace std;

class base{
    int x;
    public:
    base(int a){x=a;}
    int s(){return x;}
};

class deri : public base{
    int y;
    public:
    deri(int a , int b):base(a){
        y=b;
    }
    void show(){
        cout << s() << y ;
    }
}; 
int main(){
    int n;
    cin>>n;
    deri d(n,5);
    d.show();
    return 0;
}