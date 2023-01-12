#include <iostream>

using namespace std;





int main()
{
    int n,mine ;

    cout << "How many numbers do you want to enter : " << endl;
    cin >> n;
    int dat[n]={};
    for(int i=0 ; i<n ; i=i+1){
        int j;
        cin >> j;
        dat[i] = j;

    }
    for(int p = 0 ; p < n ; p=p+1){
        for(int q=p ; q<n ;  q++){
            mine = dat[p];
            if (mine > dat[q]){
                mine = dat[q];

            }
        int temp;
        temp = dat[p];
        dat[p] = mine;
        cout << dat[p] << endl;
        dat[q] = temp;

        }
    }

    return 0;
}
