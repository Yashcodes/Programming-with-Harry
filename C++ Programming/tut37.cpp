#include <iostream>
using namespace std;

// Base class;
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Derived class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base class-name}}
{
    // Class members/methods/etc......
}

Visibility mode is :- 1. Private and 2. Public

Note:
1. Default visibility mode is private.

2. If visibility mode is private then all the members in the public section of the base class becomes the private member of the derived class.

3. If visibility mode is public then all the members in the public section of the base class becomes the public member of the derived class.

4. Private members of the base class are never inherited, means they will never become the member of the derived class.
*/

// Creating a programmer class derived from Employee base class

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee yash(1), rohit(2);
    cout << yash.salary << endl;
    cout << rohit.salary << endl;

    Programmer skillf(10);
    cout << skillf.languageCode<<endl;
    cout << skillf.id<<endl;           // This will throw error.
    skillf.getData();
    return 0;
}