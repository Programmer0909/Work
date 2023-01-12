#include <bits/stdc++.h>
using namespace std;
#define el << endl
class student
{
public:
    int id;
    string name;
    void set()
    {
        int a;
        string s;
        cout << "Enter the roll number : ";
        cin >> a;
        id = a;
        cout el << "Enter name : ";
        cin >> s;
        name = s;
    }
    void display()
    {
        cout << "Roll no. is : " << id el << "Name is : " << name el;
    }
};

class exam : public student
{
public:
    float arr[5];
    void setter()
    {
        set();
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject : ";
            cin >> arr[i];
        }
    }
    void display()
    {
        student::display();
        cout << "Marks are : ";
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    }

    float sum()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
            sum += arr[i];
        return sum;
    }
};

class result : public exam
{
public:
    void setter()
    {
        exam::setter();
    }

    void display()
    {
        exam::display();
        cout << "Percentage : " << sum() / 5 << "%" el;
    }
};

// AIM :
int main()
{
    int n;cin >> n;
    result stud[n];
    for (int i = 0; i < n; i++)
    {
        stud[i].setter();
        stud[i].display();
    }
    return 0;
}