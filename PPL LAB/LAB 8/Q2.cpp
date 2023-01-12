#include <bits/stdc++.h>
using namespace std;
class student
{
    int roll;
    float marks[3];

public:
    student(){};
    void setter(int r)
    {
        roll = r;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter subject marks : ";
            cin >> marks[i];
        }
    }
    float average(int r)
    {
        float sum = 0;
        for (int i = 0; i < 3; i++)
            sum += marks[i];
        return sum / 3;
    }
};
int main()
{
    student s[5];
    float res[5];
    int rol;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the roll number : " << endl;
        cin >> rol;
        s[i].setter(rol);
        res[i] = s[i].average(rol);
    }
    cout << "The average marks are" << endl;
    for (int i = 0; i < 5; i++)
        cout << res[i] << " ";
    return 0;
}
// 1 10 20 30 2 50 60 70 3 90 90 90 4 100 100 100 5 30 90 50