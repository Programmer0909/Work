#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int a =1; a <=n; a++)
    {
        for (int b = 0; b < a-1; b++)
        {
            cout<<" ";
        }
        for (int c = 1; c < 2*(n-a+1); c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}