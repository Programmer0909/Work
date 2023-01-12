#include <iostream>
using namespace std;
int main(){

    cout<<"Hi\n";
    int n,p=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }
    
    return 0;
}