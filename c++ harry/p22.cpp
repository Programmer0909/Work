
// AIM :
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i] ;

        }
        if (arr[0] == arr[1] || arr[1]==arr[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
    }

    return 0;
}