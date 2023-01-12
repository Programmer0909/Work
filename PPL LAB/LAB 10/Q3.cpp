#include <iostream>
using namespace std;
class base
{
public:
    int n;
    int set()
    {
        cout << "Please Enter the number to Show the reverse of a number.";
        cin >> n;
    }
};
class second : virtual public base
{
};
class third : virtual public base
{
};
class derive : public second, public third
{
public:
    int disp()
    {
        base::set();
        cout << " Output: the reverse of a number of the number is: ";
        for (int i = 0; i < n; n = n / 10) cout << n % 10;
    }
};
int main()
{
    derive d;
    d.disp();
}