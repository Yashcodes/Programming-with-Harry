#include <iostream>
using namespace std;

// Syntax for inheriting class in multiple inheritance

// class DerivedC : visibility-mode base1, visibility-mode base2
// {
// class body of class derived
// }

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base3 is "<<base3int<<endl;
        cout<<"The sum of these values is "<<base2int+base2int+base3int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data Menbers :
    base1int --> protected
    base2int --> protected

Member fucntions :
    set_base2int() --> public
    set_base1int() --> public
    show() --> public
*/

int main()
{
    Derived yash;
    yash.set_base1int(10);
    yash.set_base2int(20);
    yash.set_base3int(30);
    yash.show();
    return 0;
}