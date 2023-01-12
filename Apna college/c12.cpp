#include <iostream>
#include <math.h>
using namespace std;

int cap(int n){
    for (int i = 0; i < 200; i++)
    {
        if (n<=pow(2,i))
        {
            return i;
            break;
        }
        
    }
    
}



int main(){

    int n;
    cin>>n;
    int res=0;
    int i=cap(n);
    for (int j = 1; j < i; j++)
    {
        if (n%2==0)
        {
            res=res*10+0;
        }
        else
        {
            res=res*10+1;
        }
        n=n/2;
    }
    cout<<res;
    return 0;
}