#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Formation & Population of schema

    

    
    int stud[30][6];
    for (int i = 0; i < 30; i++)
    {
        stud[i][0] = i + 1;
        stud[i][1] = (i + 1);
        stud[i][2] = (i + 2);
        stud[i][3] = (i + 3);
        stud[i][4] = (i + 4);
        stud[i][5] = stud[i][1] + stud[i][2] + stud[i][3] + stud[i][4];
    }
    // Display of values
    for (int i = 0; i < 30; i++)
    {
        cout << "Scholar no : " << stud[i][0] << " ";
        cout << "Marks " << stud[i][1] << " , " << stud[i][2] << " , " << stud[i][3] << " , " << stud[i][4] << " ";
        cout << "Total Marks : " << stud[i][5] << endl;
    }

    // Search for record of roll no.
    cout << "Enter roll no. of student to be searched : " << endl;
    int x;
    cin >> x;
    for (int i = 0; i < 30; i++)
    {
        if (stud[i][0] == x)
        {
            cout << "Scholar no : " << stud[i][0] << " ";
            cout << "Marks " << stud[i][1] << " , " << stud[i][2] << " , " << stud[i][3] << " , " << stud[i][4] << " ";
            cout << "Total Marks : " << stud[i][5] << endl;
        }
    }
    // Deleting the record
    cout << "Enter roll no. of student to be Deleted : " << endl;
    int x;
    cin >> x;
    for (int i = 0; i < 30; i++)
    {
        if (stud[i][0] == x)
        {
            stud[i][0] = -1;
            stud[i][1] = -1;
            stud[i][2] = -1;
            stud[i][3] = -1;
            stud[i][4] = -1;
            stud[i][5] = -1;
        }
    }

    
    return 0;
}
