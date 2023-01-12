#include <stdio.h>

/* AIM   : 
DATE     : 
AUTHOR   :PRATHAM PALI
*/

int main()
{   int n=6;
    int arr[]={1,1,1,1,0,1,1,1};
    int ct = 0;
    int maxCt = 0;
    int maCt[8]={0};
    for (int i = 0; i <= 8; i++)
    {
        // if (arr[i] == 1 && arr[i+1])    
        // {
            
        // }
        int a = 0;
        if(arr[i]==1){
            ct++;
        }
        else{
            maCt[a]=ct;
            a++;
            ct=0;
        }
    
    
    
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",maCt[i]);
    }

    
    







    // printf("%d",maxCt);
    return 0;
    
}