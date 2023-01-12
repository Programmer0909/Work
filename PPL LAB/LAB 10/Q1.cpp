#include <bits/stdc++.h>
using namespace std;
#define el << endl
class num{
    int a,b,c;
    public:
    num(int x ,int y , int z){
        a=x;b=y;c=z;
    }
    void operator ++(){
        a+=1;b+=1;c+=1;
    }
    void operator --(){
        a-=1;b-=1;c-=1;
    }
    void display(){
        cout << a el << b el << c el;}
};
int main(){
    int a , b, c;
    cin >> a >> b >> c;
    num n(a,b,c);
    n.display();
    ++n;
    n.display();
    --n;
    n.display();
    return 0;}