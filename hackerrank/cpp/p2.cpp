#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor : public Person
{
public:
    
    int publications;
    Professor() {
        this->cur_id = ++id;
    }
    static int id;
    int cur_id;
    void getdata()
    {
        cin >> name >> age >> publications;
        
    }
    void putdata(void)
    {
        cout << name << " " << age << " " << publications << " " << cur_idp << " " << endl;
    }
};
int Professor::id = 0;


class Student : public Person
{
public:
    int marks[6];
    Student() {
        this->cur_id = ++id;
    }
    static int id;
    int cur_id;

    int sum = 0;
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            sum = sum + marks[i];
        }
        cur_ids++;
    }
    void putdata(void)
    {
        cout << name << " " << age << " " << sum << " " << cur_ids << " " << endl;
    };
};

int Student ::cur_ids ;

int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
