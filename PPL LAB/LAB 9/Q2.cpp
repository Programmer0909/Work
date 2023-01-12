#include <bits/stdc++.h>
using namespace std;
class x
{
    int m1;
public:
    void setm1()
    {
        cout << "Enter the marks in x " << endl;
        int x;
        cin >> x;
        m1 = x;
    }
    int getm1()
    {
        return m1;
    }
};
class y
{
    int m2;
public:
    void setm2()
    {
        cout << "Enter the marks in y " << endl;
        int x;
        cin >> x;
        m2 = x;
    }
    int getm2()
    {
        return m2;
    }
};
class z
{
    int m3;
public:
    void setm3()
    {
        cout << "Enter the marks in z " << endl;
        int x;
        cin >> x;
        m3 = x;
    }
    int getm3()
    {
        return m3;
    }
};
class marks : public x, public y, public z
{
    int rollno;
    int marks;
    string name;
public:
    void getdata()
    {
        cout << "Enter the name and roll no of student: " << endl;
        int r;
        string s;
        cin >> s >> r;
        rollno = r;
        name = s;
    }
    void Enterdata()
    {
        getdata();
        setm1();
        setm2();
        setm3();
    }
    void displayresult()
    {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
        cout << "Total marks: " << getm1() + getm2() + getm3() << endl;
    }
};
int main()
{
    marks m;
    m.Enterdata();
    m.displayresult();
    return 0;
}

/*
Write a program to calculate the total marks of each student of a class in
 X, Y and Z and the average marks of the class. The number of students in the class 
 are entered by the user. Create a class named Marks with data members for 
 roll number, name and marks. Create three other classes inheriting the 
 Marks class, namely X, Y and Z, which are used to define marks in individual 
 subjects of each student. Roll number of each student will be generated automatically.
*/

