#include <iostream>

using namespace std;


int bin_ser(int dat[n] , int n , int key){
    int f_num , l_num , mid ;
    f_num = 0;
    l_num = n-1;

    while (f_num <= l_num){
        mid=n/2;

        if (key > dat[mid]){
            f_num = mid;

        }

        else if (key < dat[mid]){
            l_num = mid;

        }

        else if (key == dat[mid]){
            return mid;
        }
    }
    return -1;

}




int main()
{
    int n,key,p=1;

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

    while (p=1){

        cout << bin_ser(dat[n]  , n , key);

    }
    return 0;
}
