#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

// AIM : MULTILEVEL IHERITANCE
/*
    student -> exam -> result
*/

class student
{
protected:
    int roll_number;

public: 
    void set_roll_number(int r);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void)
    {
        cout << "The marks in physics are : " << physics << endl;
        cout << "The marks in maths are : " << maths << endl;
    }
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

class result : public exam
{
protected:
    float percentage;

public:
    void get_result();
};

void result ::get_result()
{
    percentage = (maths + physics) / 2;
    cout << "Your percentage is : " << percentage <<"%"<< endl;
};

int main()
{
    result pratham;
    pratham.set_roll_number(18);
    pratham.get_roll_number();

    pratham.set_marks(95 , 92);
    pratham.get_marks();

    pratham.get_result();
    return 0;
}