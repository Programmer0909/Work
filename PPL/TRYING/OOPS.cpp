#include <bits/stdc++.h>
using namespace std;

// // class item
// // {
// //     protected:
// //     static int ct;
// //     int num;

// // public:
// //     void setdata(int a)
// //     {
// //         num = a;
// //         ct++;
// //     }
// //     void getcount()
// //     {
// //         cout << ct << endl;
// //     }

// // };

// // int item::ct;
// // int main()
// // {
// //     item a, b, c;
// //     a.getcount();
// //     b.getcount();
// //     c.getcount();
// //     a.setdata(100);
// //     b.setdata(200);
// //     c.setdata(300);
// //     a.getcount();
// //     b.getcount();
// //     c.getcount();
// //     cout << a.num << endl;
// //     return 0;
// // }

// class worker // Base class declaration
// {
// protected:
//     int age;
//     char name[20];

// public:
//     void get();
//     void show();
// };

// void worker ::get()
// {
//     cout << "your name please";
//     cin >> name;
//     cout << "your age please";
//     cin >> age;
// }
// void worker ::show()
// {
//     cout << "in my name is : " << name << "in my age is " << age;
// }

// class manager : private worker
// {
//     int now;

// public:
//     void get();
//     void show();
// };
// void manager ::get()
// {
//     cout << "please enter the name In";
//     cin >> name;
//     cout << "please enter the age In"; // Directly inputting the data
//     cin >> age;
//     // members of base class
//     cout << " please enter the no.of workers under you :";
//     cin >> now;
// }
// void manager ::show()
// {
//     cout << "your name is : " << name << " and age is : " << age;
//     cout << "In no. of workers under your are : " << now;
// }

// int main()
// {
//     // clrscr ( ) ;
//     manager ml;
//     ml.get();
//     cout << "\n \n";
//     ml.show();
//     return 0;
// }

// class truck
// {
//     int length;
//     int breath;
//     int height;

// public:
//     truck()
//     {
//         int l, b, h;
//         cout << "Enter the length : ";
//         cin >> l;
//         cout << endl;
//         cout << "Enter the breath : ";
//         cin >> b;
//         cout << endl;
//         cout << "Enter the height : ";
//         cin >> h;
//         cout << endl;

//         length = l;
//         breath = b;
//         height = h;
//     }
//     int vol()
//     {
//         return length * breath * height;
//     }
// };
// class box
// {
//     int length;
//     int breath;
//     int height;
//     public:
//     box()
//     {
//         int l, b, h;
//         cout << "Enter the length : ";
//         cin >> l;
//         cout << endl;
//         cout << "Enter the breath : ";
//         cin >> b;
//         cout << endl;
//         cout << "Enter the height : ";
//         cin >> h;
//         cout << endl;
//         length = l;
//         breath = b;
//         height = h;
//     }
//     int vol()
//     {
//         return length * breath * height;
//     }
// };

// int main()
// {
//     truck t;
//     box b;
//     if(b.vol()>t.vol()) cout << "cant load";
//     else "can load";
//     return 0;
// }

// int Fun()
// {
//     static int x = 7;
//     return x--;
// }

// int main()
// {
//     int x = 10;
//     for (Fun(); Fun(); x--) cout << Fun() << endl;
//     return 0;
// }

// class employee{
//     string name;
//     long long int aadhar;
//     public:
//     employee(){
//         name="";
//         aadhar=0;
//     }
//     employee(string n , long long int a){
//         this->name = n;
//         this->aadhar = a;
//     }
//     void display(){
//         cout << "Users name is : " << this->name << endl;
//         cout << "Users adhar is : " << this->aadhar << endl;
//     }
// };

// class faculty:public employee{
//     string sub;
//     public:
//     faculty (string s) : employee(){
//         employee( n , a) ;

//     }
// };

// #include <iostream>
// using namespace std;
// // order of execution of constructors in inheritance
// class Base
// {
//     int x;

// public:
//     // default constructor
//     Base()
//     {
//         cout << "Base class default constructor\n";
//     }
//     Base(int x)
//     {
//         this->x = x;
//         cout << "Base class parameterized constructor\n";
//     }
// };
// class Derived : public Base
// {
//     int y;

// public:
//     // default constructor
//     Derived()
//     {
//         cout << "Derived class default constructor\n";
//     }
//     // parameterized constructor
//     Derived(int i) : Base(i)
//     {
//         cout << "Derived class parameterized constructor\n";
//     }
// };
// int main()
// {
//     Base b;         // construct base class object
//     Derived d1;     // construct derived class object with default constructor
//     Derived d2(10); // construct derived class object with parameterized constructor
// }

#include <bits/stdc++.h>
using namespace std;
class item
{
private:
    static int ct;
    int num;
public:
    void getdata(int a){num = a; ct++;}
    void getcount(){cout << ct << endl;}
};

//AIM : 
int item::ct;
int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    a.getcount();
    b.getdata(200);
    b.getcount();
    c.getdata(300);
    c.getcount();
    
    return 0;
}