#include <iostream>
#include <math.h>
using namespace std;

// AIM :

class employee
{
private:
    int id;
    static int count,game;

public:
    void setid(void);
    void getid(void);
};

void employee ::setid(void)
{
    cout << "Enter employee id" << endl;
    cin >> id;
    count++;
    game++;
}
void employee ::getid(void)
{
    cout << "The id of employee is " << id << "and count is" << count << endl;
}

int employee::count;
int employee::game;
int main()
{
    employee harry, sh, gp;
    harry.setid();
    harry.getid();
    sh.setid();
    sh.getid();
    gp.setid();
    gp.getid();
    return 0;
}