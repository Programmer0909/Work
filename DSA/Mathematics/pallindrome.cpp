#include <bits/stdc++.h>
using namespace std;

//AIM : 
int main(){
    int n,res=0,rem;
    cin>>n;
    int temp=n;
    while (temp)
    {
        rem=temp%10;
        res=10*res+rem;
        temp=temp/10;
    }
    if (res==n)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a pallindrome";
    }
    
    
    return 0;
}