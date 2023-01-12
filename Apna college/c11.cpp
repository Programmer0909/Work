#include <iostream>
#include <math.h>
using namespace std;

int pn(int a){
    bool var=0;
    for (int i = 2; i < sqrt(a); i++)
    {
        if (a%i==0)
        {
            printf("COMPOSITE NUMBER\n");
            var=1;
            break;
        }
        
    }
    if (var==0)
    {
        cout<<"PRIME NUMBER\n";
    }
    return 0;
}



int main(){

    int n;
    cin>>n;
    pn(n);

    return 0;
}