#include <iostream>
#include <math.h>
using namespace std;

//AIM : Checking pallindrome

int main(){

    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-i-2])
        {
            printf("Not a palindrome\n");
        }
        
    }
    printf("sdfghj");
    
    return 0;
}