#include <iostream>
using namespace std;
int main(){
    
    int n, m;
    cin>>n;
    cin>>m;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i==0 || i==n-1 )
            {
                printf("* ");
            }
            else
            {
                if (j==0 || j==m-1)
                {
                    printf("* ");
                }
                else
                {
                    printf ("  ");
                }
                
            } 
        }
        cout << "\n";
    }
    
    return 0;
}

