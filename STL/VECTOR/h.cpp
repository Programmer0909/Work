#include <bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[5] > v2[5];
}

// AIM :
int main()
{
    vector<vector<int>> arr;
    for (int i = 0; i < 30; i++)
    {
        vector<int> v;
        v.push_back(i + 1);
        v.push_back((rand() % 21) + 60);
        v.push_back((rand() % 21) + 60);
        v.push_back((rand() % 21) + 60);
        v.push_back((rand() % 21) + 60);
        int sum = 0;
        for (int j = 1; j < 5; j++)
        {
            sum += v[j];
        }
        v.push_back(sum);
        arr.push_back(v);
    }

    // Outputing the array
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    // Deleting the record
    cout << "Enter roll no. of student to be Deleted : " << endl;
    int deli;
    cin >> deli;
    vector<vector<int>>::iterator it = arr.begin();
    for (int i = 0; i < 30; i++)
    {
        it++;
        if (arr[i][0] == deli)
        {
            arr.erase(it);
        }
    }
    // Search for record of roll no.
    cout << "Enter roll no. of student to be searched : " << endl;
    int x;
    cin >> x;
    for (int i = 0; i < 30; i++)
    {
        if (arr[i][0] == x)
        {
            cout << "Scholar no : " << arr[i][0] << " ";
            cout << "Marks " << arr[i][1] << " , " << arr[i][2] << " , " << arr[i][3] << " , " << arr[i][4] << " ";
            cout << "Total Marks : " << arr[i][5] << endl;
        }
    }

    // Insert record.
    cout << "Enter roll no. of student after which element is to be inserted : " << endl;
    int x;
    cin >> x;
    for (int i = 0; i < 30; i++)
    {
        vector<int> v1 = {i + 1, 50, 50, 50, 50, 50, 250};
        arr.push_back(v1);
    }

    // Sort the array
    sort(arr.begin(), arr.end(), sortcol );
    // Outputing the array
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    return 0;
}
