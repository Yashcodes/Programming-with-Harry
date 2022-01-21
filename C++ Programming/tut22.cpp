// OOPs -> Classes and Objects

// C++ --> initially called --> C with classes bt stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      --> members are public
//      --> No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures  in C++ are typedef
// we can declare objects along with the class declaration like this:-

/* class Employee{
        // class definition
     } yash, harrry, rohit; */

// yash.salary = 8 makes no sense if salary is private

//  Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    cout << "Binary format is correct" << endl;
}

void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    cout << endl;
    b.ones_complement();
    b.display();
    return 0;
}