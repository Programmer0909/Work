#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

//AIM : 

int main(){
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}