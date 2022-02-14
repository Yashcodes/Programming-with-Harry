#include <iostream>
using namespace std;
/*
Case 1:
class B:public A{
    // Order of execution of constructor --> FirstA() then B();
};

Case 2:
class A: public B, public C{
    // Order of execution of constructor --> First A(), then B() and C();
}

Case 3:
class A: public B , virtual  public C{
    // Order of execution of constructor -->  C() then B() and A();
}
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called!" << endl;
    }

    void print_data_base1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called!" << endl;
    }

    void print_data_base2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(b),Base1(a) 
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called!" << endl;
    }

     void print_data_derived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived yash(1,2,3,4);
    yash.print_data_base1();
    yash.print_data_base2();
    yash.print_data_derived();
    return 0;
}