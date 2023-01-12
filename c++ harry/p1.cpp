#include <iostream>
#include <math.h>
using namespace std;

// AIM :

class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void intcounter(void) { counter = 0; }
    void set_id(void);
    void set_price(void);
    void display_price(void);
};

void shop ::set_id(void)
{
    cout << "Enter item id" << endl;
    cin >> item_id[counter];
}

void shop ::set_price()
{
    cout << "Enter item price" <<endl;
    cin >> item_price[counter];
    counter++;
}

void shop ::display_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price for item id " << item_id[i] << "is " << item_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.intcounter();
    dukaan.set_id();
    dukaan.set_price();
    dukaan.set_id();
    dukaan.set_price();
    
    dukaan.display_price();

    return 0;
}