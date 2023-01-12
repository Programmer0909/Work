#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

//AIM :  PROTECTED INHERITANCE

/*
                    public m                protected m                 private m

    public in    :  public                  protected                   not derived
    protected in :  protected               protected                   not derived
    private in   :  private                 private                     not derived

*/



class base{
    int a;
    protected:
    int b;
    public:
    int c;
};

class derived : protected base{

};

int main(){
    derived x,y;
    return 0;
}