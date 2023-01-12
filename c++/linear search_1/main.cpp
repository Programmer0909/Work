#include <iostream>

using namespace std;

int main()
{
    int n,key,fl=0;


    cout << "How many numbers do you want to enter : " << endl;
    cin >> n;
    int dat[n]={};
    for(int i=0 ; i<n ; i=i+1){
        int j;
        cin >> j;
        dat[i] = j;

    }

    cout << "Enter key : ";
    cin >> key ;

    for(int i=1 ; i<=n ; i++){
        if (key==dat[i]){
            cout << "Found at index number : " << i;
            fl=1;
            break;
        }

    }

    if (fl==0){
        cout << "Not found" << endl;
    }

    return 0;
}
